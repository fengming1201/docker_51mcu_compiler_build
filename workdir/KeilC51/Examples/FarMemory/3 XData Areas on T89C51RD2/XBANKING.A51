$NOMOD51 NOLINES
$NOCOND
;------------------------------------------------------------------------------
;  This file is part of the LX51 Extended Linker/Locater package
;  Copyright (c) 2000 - 2005 Keil Elektronik GmbH and Keil Software, Inc.
;  Version 1.04a, Variable Banking: 'far' & 'far const' C51 memory type support
;  Version 1.04a: added register usage description, corrected CSTPTR function
;  Version 1.04b: added DISABLE_FARXRAM in IST_XRAM function
;------------------------------------------------------------------------------
$NOMOD51
;
;  NOTES: This file is configured for External XRAM access (also called far XRAM) 
;         support of the T89C51RD2 device.  
;
AUXR	DATA	08EH	; AUXR SFR
EECON	DATA	0D2H	; EECON SFR
;
;************************ Configuration Section *******************************
;                                                                             *
; If the CPU provides an extended DPTR register for addressing HDATA, the     *
; following settings must be defined:                                         *
?C?XPAGE1SFR  DATA  EECON ; SFR Address of XPAGE1 register                    *
?C?XPAGE1RST  EQU   0     ; XPAGE1 register value to address X:0 region       *
;                                                                             *
; The C51 Compiler must be used with the VARBANKING directive.  If your       *
; application accesses XDATA memory in interrupts, VARBANKING(1) must be      *
; applied.  With VARBANING(1) the C51 compiler saves the ?C?XPAGE1SFR and     *
; sets this register to the ?C?XPAGE1RST value.                               *
;                                                                             *
;-----------------------------------------------------------------------------*
;
XMEM EQU 0x02000000       ; LX51 xdata symbol offset: do not change!
CMEM EQU 0x01000000       ; LX51 code  symbol offset: do not change!
;
;******* Configuration Section for uVision2 Memory Simulation Support *********
;                                                                             *
; The following settings allow you to map the physical memory areas S:, T:    *
; U: and V: of the uVision2 Simulator into the logical XDATA or CODE address  *
; space of the LX51 linker/locater.                                           *
;                                                                             *
?B?SMEM EQU 0             ; No mapping for S: Memory                          *
?B?TMEM EQU 0             ; No mapping for T: Memory                          *
?B?UMEM EQU 0             ; No mapping for U: Memory                          *
?B?VMEM EQU XMEM+0x20000  ; Simulated V: Memory mapped to LX51 X:0x20000 area *
;                                                                             *
; The above setting redirects the symbols in the area X:0x20000 .. X:0x2FFFF  *
; into the uVision2 simulation memory area for the EEPROM  V:0 .. V:0xFFFF    *
;                                                                             *
;-----------------------------------------------------------------------------*
;
;******************************************************************************
;                                                                             *
; THEORY OF OPERATION                                                         *
; -------------------                                                         *
; This section describes how the extended LX51 linker/locater manages the     *
; extended address spaces that are addressed with the new C51 memory types    *
; 'far' and 'far const'.  The C51 Compiler uses 3 byte pointer generic        *
; pointer to access these memory areas.  'far' variables are placed in the    *
; memory class HDATA and 'far const' variables get the memory class 'HCONST'. *
; The LX51 linker/locater allows you to locate these memory classes in the    *
; logical 16 MBYTE CODE or 16 MBYTE XDATA spaces.                             *
;                                                                             *
; The memory access itself is performed via eight different subroutines that  *
; can be configured in this assembler module.  These routines are:            *
;    ?C?CLDXPTR, ?C?CSTXPTR  ; load/store BYTE (char)  in extended memory     *
;    ?C?ILDXPTR, ?C?ISTXPTR  ; load/store WORD (int)   in extended memory     *
;    ?C?PLDXPTR, ?C?PSTXPTR  ; load/store 3-BYTE PTR   in extended memory     *
;    ?C?LLDXPTR, ?C?LSTXPTR  ; load/store DWORD (long) in extended memory     *
;                                                                             *
; Each function gets as a parameter the memory address with 3 BYTE POINTER    *
; representation in the CPU registers R1/R2/R3.  The register R3 holds the    *
; memory type.  The C51 compiler uses the following memory types:             *
;                                                                             *
; R3 Value | Memory Type | Memory Class | Address Range                       *
; -----------------------+--------------+--------------------------           *
;    00    | data/idata  | DATA/IDATA   | I:0x00     .. I:0xFF                *
;    01    | xdata       | XDATA        | X:0x0000   .. X:0xFFFF              *
;  02..7F  | far         | HDATA        | X:0x010000 .. X:0x7E0000            *
;  81..FD  | far const   | HCONST       | C:0x800000 .. C:0xFD0000 (see note) *
;    FE    | pdata       | XDATA        | one 256-byte page in XDATA memory   *
;    FF    | code        | CODE         | C:0x0000   .. C:0xFFFF              *
;                                                                             *
; Note: the far const memory area is mapped into the banked memory areas.     *
;                                                                             *
; The R3 values 00, 01, FE and FF are already handled within the C51 run-time *
; library.  Only the values 02..FE are passed to the XPTR access functions    *
; described below.  The AX51 macro assembler provides the MBYTE operator      *
; that calculates the R3 value that needs to be passed to the XPTR access     *
; function.   AX51 Assembler example for using XPTR access functions:         *
;     MOV  R1,#LOW   (variable)   ; gives LSB address byte of variable        *
;     MOV  R2,#HIGH  (variable)   ; gives MSB address byte of variable        *
;     MOV  R3,#MBYTE (variable)   ; gives memory type byte of variable        *
;     CALL ?C?CLDXPTR             ; load BYTE variable into A                 *
;******************************************************************************

		NAME	?C?XBANKING	; 'far' Memory Access Support

PUBLIC ?B?SMEM, ?B?TMEM, ?B?UMEM, ?B?VMEM
PUBLIC ?C?XPAGE1SFR, ?C?XPAGE1RST
PUBLIC ?C?CLDXPTR, ?C?CSTXPTR, ?C?ILDXPTR, ?C?ISTXPTR
PUBLIC ?C?PLDXPTR, ?C?PSTXPTR, ?C?LLDXPTR, ?C?LSTXPTR

B	DATA 0F0H	; SFR Address
DPL	DATA 082H
DPH	DATA 083H
ACC	DATA 0E0H
IEN0	DATA 0A8H
EA	BIT  IEN0.7

?C?LIB_CODE	SEGMENT		CODE
		RSEG	?C?LIB_CODE

ENABLE_FARXRAM	MACRO
		CLR	EA		; disable interrupt
		ANL	AUXR,#0FDH	; set External XRAM with EXTRAM bit
             	ENDM

DISABLE_FARXRAM	MACRO
		ORL	AUXR, #002H	; set Internal XRAM
		SETB	EA		; enable interrupt
              	ENDM


ENABLE_EEPROM	MACRO
		ORL	EECON,#002H	; set EEE
             	ENDM

DISABLE_EEPROM	MACRO
		ANL	EECON,#NOT 002H ; reset EEE
              	ENDM

; Store Byte into EEPROM space
ST_INC_DPTR:	MOVX	@DPTR,A
		MOV	A,DPL          ; check for 64 Byte block overflow
		ANL	A,#3FH
		ADD	A,#0C1H
		INC	DPTR
		JNC	NOE2PROGRAM
E2PROGRAM:	MOV	EECON,#052H
		MOV	EECON,#0A2H
E2WAIT:		MOV	A,EECON
		JB	ACC.0,E2WAIT
NOE2PROGRAM:	RET


;-----------------------------------------------------------------------------
; CLDXPTR: Load   BYTE in A             via Address given in R1/R2/R3
; Registers which can be used without saving:  DPTR, CY, A
;
?C?CLDXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,CLD_XRAM
		ENABLE_EEPROM		; EEPROM access
		MOVX	A,@DPTR
		DISABLE_EEPROM
		RET

CLD_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOVX	A,@DPTR
		DISABLE_FARXRAM
		RET


;-----------------------------------------------------------------------------
; CSTXPTR: Store  BYTE in A             via Address given in R1/R2/R3
; Registers which can be used without saving:  DPTR, CY
;
?C?CSTXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,CST_XRAM
		ENABLE_EEPROM		; EEPROM access
		MOVX	@DPTR,A
		PUSH	ACC
		CALL	E2PROGRAM
		POP	ACC
		DISABLE_EEPROM
		RET

CST_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOVX	@DPTR,A
		DISABLE_FARXRAM
		RET

;-----------------------------------------------------------------------------
; ILDXPTR: Load   WORD in A(LSB)/B(HSB) via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A, B
;
?C?ILDXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,ILD_XRAM
		ENABLE_EEPROM		; EEPROM access
		MOVX	A,@DPTR
		INC	DPTR
		MOV	B,A
		MOVX	A,@DPTR
		DISABLE_EEPROM
		RET

ILD_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOVX	A,@DPTR
		INC	DPTR
		MOV	B,A
		MOVX	A,@DPTR
		DISABLE_FARXRAM
		RET

;-----------------------------------------------------------------------------
; ISTXPTR: Store  WORD in A(HSB)/B(LSB) via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A
;
?C?ISTXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,IST_XRAM
		ENABLE_EEPROM		; EEPROM access
		CALL	ST_INC_DPTR
		MOV	A,B
		MOVX	@DPTR,A
		CALL	E2PROGRAM
		DISABLE_EEPROM
		RET

IST_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,B
		MOVX	@DPTR,A
		DISABLE_FARXRAM
		RET

;-----------------------------------------------------------------------------
; PLDXPTR: Load    PTR in R1/R2/R3      via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A, R1, R2, R3
;
?C?PLDXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,PLD_XRAM
		ENABLE_EEPROM		; EEPROM access
		MOVX	A,@DPTR
		MOV	R3,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R2,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R1,A
		DISABLE_EEPROM
		RET

PLD_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOVX	A,@DPTR
		MOV	R3,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R2,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R1,A
		DISABLE_FARXRAM
		RET

;-----------------------------------------------------------------------------
; PSTXPTR: Store   PTR in R0/A/B        via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A
;
?C?PSTXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,PST_XRAM
		ENABLE_EEPROM		; EEPROM access
		XCH	A,B
		CALL	ST_INC_DPTR
		MOV	A,B
		CALL	ST_INC_DPTR
		MOV	A,R0
		MOVX	@DPTR,A
		CALL	E2PROGRAM
		DISABLE_EEPROM
		RET

PST_XRAM:	ENABLE_FARXRAM		; XRAM access
		XCH	A,B
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,B
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R0
		MOVX	@DPTR,A
		DISABLE_FARXRAM
		RET

;-----------------------------------------------------------------------------
; LLDXPTR: Load  DWORD in R4/R5/R6/R7   via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A, R4, R5, R6, R7
;
?C?LLDXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,LLD_XRAM
		ENABLE_EEPROM		; EEPROM access
		MOVX	A,@DPTR
		MOV	R4,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R5,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R6,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R7,A
		DISABLE_EEPROM
		RET

LLD_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOVX	A,@DPTR
		MOV	R4,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R5,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R6,A
		INC	DPTR
		MOVX	A,@DPTR
		MOV	R7,A
		DISABLE_FARXRAM
		RET

;-----------------------------------------------------------------------------
; LSTXPTR: Store DWORD in R4/R5/R6/R7   via Address given in R1/R2/R3 
; Registers which can be used without saving:  DPTR, CY, A
;
?C?LSTXPTR:	MOV	DPL,R1
		MOV	DPH,R2
		CJNE	R3,#3,LST_XRAM
		ENABLE_EEPROM		; EEPROM access	
		MOV	A,R4
		CALL	ST_INC_DPTR
		MOV	A,R5
		CALL	ST_INC_DPTR
		MOV	A,R6
		CALL	ST_INC_DPTR
		MOV	A,R7
		MOVX	@DPTR,A
		CALL	E2PROGRAM
		DISABLE_EEPROM
		RET

LST_XRAM:	ENABLE_FARXRAM		; XRAM access
		MOV	A,R4
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R5
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R6
		MOVX	@DPTR,A
		INC	DPTR
		MOV	A,R7
		MOVX	@DPTR,A
		DISABLE_FARXRAM
		RET

		END

