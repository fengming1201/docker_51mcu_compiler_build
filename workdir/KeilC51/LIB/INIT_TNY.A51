$NOMOD51
;------------------------------------------------------------------------------
;  This file is part of the C51 Compiler package
;  Copyright (c) 1988-2002 Keil Elektronik GmbH and Keil Software, Inc.
;------------------------------------------------------------------------------
;  INIT_TNY.A51:  This code is executed, if the application program contains
;  initialized variables at file level.  This file is a reduced version of the
;  INIT.A51 file and can be used for projects that do not contain XDATA memory
;  initilizations.
;
;  If you are using uVision2, just add the file as last file to your project.
;  *** IMPORTANT NOTE ***:  this file needs to be the last file of the linker 
;  input list.  If you are using uVision2 this file should be therefore the 
;  last file in your project tree.can
;
;
;  To translate this file manually use Ax51 with the following invocation:
;
;     Ax51 INIT_TNY.A51
;
;  To link the modified INIT.OBJ file to your application use the following
;  BL51/LX51 invocation:
;
;     Lx51 <your object file list>, INIT_TNY.OBJ <controls>
;
;------------------------------------------------------------------------------
;
;  User-defined Watch-Dog Refresh.
;
;  If the C application contains many initialized variables uses a watchdog
;  it might be possible that the user has to include a watchdog refresh into
;  the initialization process. The watchdog refresh routine can be included
;  in the following MACRO and can alter all CPU registers except
;  DPTR.
;
WATCHDOG        MACRO
                                ; Include any Watchdog refresh code here
                ENDM
;------------------------------------------------------------------------------

; Standard SFR Symbols
ACC     DATA    0E0H
DPL     DATA    82H
DPH     DATA    83H

                NAME    ?C_INIT


?C_C51STARTUP   SEGMENT   CODE
?C_INITSEG      SEGMENT   CODE          ; Segment with Initializing Data


                EXTRN CODE (MAIN)
                PUBLIC  ?C_START

                RSEG    ?C_C51STARTUP
INITEND:        AJMP    MAIN

IorPData:                               ; If CY=1 PData Values
                CLR     A
                MOVC    A,@A+DPTR
                INC     DPTR
                MOV     R0,A            ; Start Address
IorPLoop:       CLR     A
                MOVC    A,@A+DPTR
                INC     DPTR
                MOV     @R0,A
Common:         INC     R0
                DJNZ    R7,IorPLoop
                SJMP    Loop

Bits:           CLR     A
                MOVC    A,@A+DPTR
                INC     DPTR
                MOV     R0,A
                ANL     A,#007H
                ADD     A,#Table-LoadTab
                XCH     A,R0
                CLR     C       
                RLC     A               ; Bit Condition to Carry
                SWAP    A
                ANL     A,#00FH
                ORL     A,#20H          ; Bit Address
                XCH     A,R0            ; convert to Byte Addressen
                MOVC    A,@A+PC
LoadTab:        JC      Setzen
                CPL     A
                ANL     A,@R0
                SJMP    BitReady
Setzen:         ORL     A,@R0
BitReady:       MOV     @R0,A
                DJNZ    R7,Bits
                SJMP    Loop

Table:          DB      00000001B
                DB      00000010B
                DB      00000100B
                DB      00001000B
                DB      00010000B
                DB      00100000B
                DB      01000000B
                DB      10000000B
                

?C_START:       
                MOV     DPTR,#?C_INITSEG
Loop:           CLR     A
                MOV     R6,#1
                MOVC    A,@A+DPTR
                JZ      INITEND
                INC     DPTR
                MOV     R7,A
                ANL     A,#3FH
                JNB     ACC.5,NOBIG
                ANL     A,#01FH
                MOV     R6,A
                CLR     A
                MOVC    A,@A+DPTR
                INC     DPTR
                JZ      NOBIG
                INC     R6
NOBIG:          XCH     A,R7
                ANL     A,#0C0H         ; Typ is in Bit 6 and Bit 7
                ADD     A,ACC
                JZ      IorPData
                JC      Bits
                SJMP    $

                RSEG    ?C_INITSEG
                DB      0

;-------------------------------------------------------------------------
; STRUCTURE OF THE INITIALIZATION INFORMATION
; -------------------------------------------
; This section describes the initialization data generated by C51 for
; explicit variable initializations (in segment ?C_INITSEC).
;
; Explicit variable initilizations at C source level are stored by C51 in
; the segment ?C_INITSEC.  All partial segments are combined at linker level
; to one segment.  The segment end value DB 0 is taken from this library module
; INIT.A51.
;
; Structure of the ?C_INITSEC information:
;     <Info> (see below) [BYTE]                      ----+  repeated
;     <additional info>  [BYTES depend on Info]      ----+  repeated
;     0x00               [BYTE]   <end of list mark>
;
;  <Info> has the following format:
;
;  Bit      7  6  5  4  3  2  1  0
;  <Info>   T  T  B  L  L  L  L  L    T=Type  B=BIGBIT  L=LENGTH
;
;  If BIGBIT is set, another LENGTH BYTE FOLLOWS.  The LENGHT
;  info of the first byte is then the HIGH part.
;
;  Typ is one of the following:
;  0  := IDATA init values;  the following bytes follow:
;        -  1 byte address
;        -  init data bytes according LENGTH specification
;
;  1  := XDATA init values;  the following bytes follow:
;        -  2 byte address (high byte first)
;        -  init data bytes according LENGTH specification
;
;  2  := PDATA init values;  the following bytes follow:
;        -  1 byte address
;        -  init data bytes according LENGTH specification
;
;  3, BIGBIT=0  := BIT init values; the followign bytes follow:
;        -  1 byte for each bit according LENGTH specification
;           this byte has the following format:
;
;           Bit    7  6  5  4  3  2  1  0
;                  I  B  B  B  B  B  B  B   I := state of the bit
;                                           B := bit address
;
;  3, BIGBIT=1  := HDATA init values;   the following bytes follow:
;        -  another LENGTH byte (since BIGBIT is always 1)
;        -  3 byte address  (MSB first)
;        -  data bytes according LENGTH specification
;
;----------------------------------------------------------------------

                END

