;
;  *** <<< Use Configuration Wizard in Context Menu >>> ***
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Startup Code for the Philips 8xC749/750/751/752
;  Copyright (c) 1988-2005 Keil Elektronik GmbH and Keil Software, Inc.
;------------------------------------------------------------------------------
;  START751.A51:  This code is executed after processor reset.
;  You may add this file to a uVision2 project.
;
;  To translate this file use A51 with the following invocation:
;
;     A51 START751.A51
;
;  To link the modified START751.OBJ file to your application use the following
;  BL51 invocation:
;
;     BL51 your object file list, START751.OBJ controls
;
;------------------------------------------------------------------------------
;
;  User-defined <h> Power-On Initialization of Memory
;
;  With the following EQU statements the initialization of memory
;  at processor reset can be defined:
;
;		; the absolute start-address of IDATA memory is always 0
;  <o> IDATA memory size <0x0-0x100>
;     <i> Note: The absolute start address of IDATA memory is always 0
;     <i>       The IDATA space physically overlaps the DATA and BIT areas.
IDATALEN	EQU	40H	; the length of IDATA memory in bytes.
;
;
;  Notes:  The IDATA space overlaps physically the DATA and BIT areas of the
;          8051 CPU. At minimum the memory space occupied from the C51 
;          run-time routines must be set to zero.
; </h>
;------------------------------------------------------------------------------
;
; <h> Reentrant Stack Initialization
;
;  The following EQU statements define the stack pointer for reentrant
;  functions and initialized it:
;
;  <h> Stack Space for reentrant functions in the SMALL model.
;   <q> IBPSTACK: Enable SMALL model reentrant stack
;       <i> Stack space for reentrant functions in the SMALL model.
IBPSTACK	EQU	0	; set to 1 if small reentrant is used.
;   <o> IBPSTACKTOP: End address of SMALL model stack <0x0-0xFF>
;       <i> Set the top of the stack to the highest location.
IBPSTACKTOP	EQU	0FFH+1	; set top of stack to highest location+1.
;  </h>
; </h>
;------------------------------------------------------------------------------

		NAME	?C_STARTUP


?C_C51STARTUP	SEGMENT   CODE
?STACK		SEGMENT   IDATA

		RSEG	?STACK
		DS	1

		EXTRN CODE (?C_START)
		PUBLIC	?C_STARTUP

		CSEG	AT	0
?C_STARTUP:	AJMP	STARTUP1

		RSEG	?C_C51STARTUP

STARTUP1:

IF IDATALEN <> 0
		MOV	R0,#IDATALEN - 1
		CLR	A
IDATALOOP:	MOV	@R0,A
		DJNZ	R0,IDATALOOP
ENDIF


IF IBPSTACK <> 0
EXTRN DATA (?C_IBP)

		MOV	?C_IBP,#LOW IBPSTACKTOP
ENDIF

		MOV	SP,#?STACK-1
		AJMP	?C_START

		END
