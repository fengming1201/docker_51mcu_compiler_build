/*-----------------------------------------------------------------------------
INIT_MEM.C is part of the C51 Compiler package from Keil Software.
Copyright (c) 1995-2005 Keil Software.  All rights reserved.
-----------------------------------------------------------------------------*/
#include <stdlib.h>

/*-----------------------------------------------
Memory pool block structure and typedefs.
Memory is laid out as follows:

{[NXT|LEN][BLK (LEN bytes)]}{[NXT|LEN][BLK]}...

Note that the size of a node is:
          __mem__.len + sizeof (__mem__)
-----------------------------------------------*/
struct __mem__
  {
  struct __mem__ _MALLOC_MEM_ *next;    /* single-linked list */
  unsigned int                len;      /* length of following block */
  };

typedef struct __mem__         __memt__;
typedef __memt__ _MALLOC_MEM_ *__memp__;

#define	HLEN	(sizeof(__memt__))

/*-----------------------------------------------
Memory pool headers.  AVAIL points to the first
available block or is NULL if there are no free
blocks.  ROVER is a roving header that points to
a block somewhere in the list.

Note that the list is maintained in address
order.  AVAIL points to the block with the
lowest address.  That block points to the block
with the next higher address and so on.
-----------------------------------------------*/
__memt__ _MALLOC_MEM_ __mem_avail__ [2] =
  { 
    { NULL, 0 },	/* HEAD for the available block list */
    { NULL, 0 },	/* UNUSED but necessary so free doesn't join HEAD or ROVER with the pool */
  };

#define AVAIL	(__mem_avail__[0])

#define MIN_POOL_SIZE	(HLEN * 10)

/*-----------------------------------------------------------------------------
void init_mempool (
  void _MALLOC_MEM_ *pool,	address of the memory pool
  unsigned int size);           size of the pool in bytes

-----------------------------------------------------------------------------*/
void init_mempool (
  void _MALLOC_MEM_ *pool,
  unsigned int size)
{

/*-----------------------------------------------
If the pool points to the beginning of a memory
area (NULL), change it to point to 1 and decrease
the pool size by 1 byte.
-----------------------------------------------*/
  if (pool == NULL)   {
    pool = 1;
    size--;
  }

/*-----------------------------------------------
Set the AVAIL header to point to the beginning
of the pool and set the pool size.
-----------------------------------------------*/
  AVAIL.next = pool;
  AVAIL.len  = size;

/*-----------------------------------------------
Set the link of the block in the pool to NULL
(since it's the only block) and initialize the
size of its data area.
-----------------------------------------------*/
  (AVAIL.next)->next = NULL;
  (AVAIL.next)->len  = size - HLEN;

}


