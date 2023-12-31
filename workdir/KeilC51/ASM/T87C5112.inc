;***************************************************************************
;* NAME:             T87C5112.inc
;*-----------------------------------------------------------------------------
;* CREATED_BY:     
;* COMPANY:          ATMEL-WM
;* CREATION_DATE:    01/03/2001
;* $AUTHOR:          $
;* $REVISION:        1.0 $
;* $DATE:            $
;*-----------------------------------------------------------------------------
;* PURPOSE:          This file defines the T87C5111 product:
;*                   - Register SFRs
;*                   - Bit SFRs
;*
;******************************************************************************/
$SAVE    
$NOLIST 

/* C51 CORE*/
ACC     DATA    0E0H
B       DATA    0F0H
SP      DATA    81H
DPL     DATA    82H
DPH     DATA    83H
PCON    DATA    87H
PSW     DATA    0D0H

;--- PSW bits ------
CY      BIT     0D7H
AC      BIT     0D6H
F0      BIT     0D5H
RS1     BIT     0D4H
RS0     BIT     0D3H
OV      BIT     0D2H
P       BIT     0D0H

/* SYSTEM MANAGEMENT*/
PCON	DATA	87H
AUXR1	DATA	0A2H
PFILT	DATA	84H
CONF	DATA	EF

/* CLOCK */
CKCON0	DATA	8FH
CKCON1	DATA	0AFH
CKSEL	DATA	85H
CKRL	DATA	97H
OSCCON	DATA	86H


/* INTERRUPT */
IEN1	DATA	0B1H
IPL1	DATA	0B2H
IPH1	DATA	0B3
IPH0	DATA	0B7H

IPL0	DATA	0B8H
;--- IPL0 Bits -----
PPCL   	BIT	0BEH
PSL  	BIT	0BCH
PT1L 	BIT	0BBH
PX1L  	BIT	0BAH
PT0L 	BIT	0B9H
PX0L	BIT	0B8H

IEN0    DATA    0A8H
;--- IEN0 Bits -----
EA   	BIT	0AFH
EC   	BIT	0AEH
ES  	BIT	0ACH
ET1 	BIT	0ABH
EX1  	BIT	0AAH
ET0 	BIT	0A9H
EX0	BIT	0A8H


/* PORT CONFIGURATION REGISTER*/
P4M2	DATA	0E5H
P4M1	DATA	0DEH
P3M2	DATA	0E4H
P3M1	DATA	0D5H
P1M2	DATA	0E2H
P1M1	DATA	0D4H

/* DATA PORT REGISTER */
P0      DATA    80H
;--- P0 Bits ------
P0_7	BIT	87H
P0_6	BIT	86H
P0_5	BIT	85H
P0_4	BIT	84H
P0_3	BIT	83H
P0_2	BIT	82H
P0_1	BIT	81H
P0_0	BIT	80H

P1      DATA    90H
;--- P1 Bits ------
P1_7	BIT	97H
P1_6	BIT	96H
P1_5	BIT	95H
P1_4	BIT	94H
P1_3	BIT	93H
P1_2	BIT	92H
P1_1	BIT	91H
P1_0	BIT	90H

P2      DATA    0A0H
;--- P2 Bits ------
P2_7	BIT	0A7H
P2_6	BIT	0A6H
P2_5	BIT	0A5H
P2_4	BIT	0A4H
P2_3	BIT	0A3H
P2_2	BIT	0A2H
P2_1	BIT	0A1H
P2_0	BIT	0A0H


P3      DATA    0B0H
;--- P3 Bits -------
RD      BIT     0B7H
WR      BIT     0B6H
T1      BIT     0B5H
T0      BIT     0B4H
INT1    BIT     0B3H
INT0    BIT     0B2H
TXD     BIT     0B1H
RXD     BIT     0B0H


P4	DATA	0C0H
;--- P4 Bits ------
P4_7	BIT	0C7H
P4_6	BIT	0C6H
P4_5	BIT	0C5H
P4_4	BIT	0C4H
P4_3	BIT	0C3H
P4_2	BIT	0C2H
P4_1	BIT	0C1H
P4_0	BIT	0C0H
;--- P4 Bits ------
SS_	BIT	0C2H
SCK	BIT	0C6H
MOSI	BIT	0C5H
MISO	BIT	0C4H

/* TIMER */
TMOD    DATA    89H
TL0     DATA    8AH
TL1     DATA    8BH
TH0     DATA    8CH
TH1     DATA    8DH

TCON	DATA	88H
;---  TCON Bits ---
TF1     BIT     8FH
TR1     BIT     8EH
TF0     BIT     8DH
TR0     BIT     8CH
IE1     BIT     8BH
IT1     BIT     8AH
IE0     BIT     89H
IT0     BIT     88H


/* UART */
SBUF    DATA    99H
SADEN	DATA	0B9H
SADDR	DATA	0A9H

SCON    DATA    98H
;--- SCON Bits ----
SM0     BIT     9FH
SM1     BIT     9EH
SM2     BIT     9DH
REN     BIT     9CH
TB8     BIT     9BH
RB8     BIT     9AH
TI      BIT     99H
RI      BIT     98H

;-- Baud Rate generator
BRL  	DATA	09AH
BDRCON  DATA 	09BH

/* WATCHDOG */
WDTRST	DATA	0A6H
WDTPRG 	DATA	0A7H 


/* SPI CONTROLLER */
SPCON    DATA    0C3H
SPSTA    DATA    0C4H
SPDAT    DATA    0C5H


/* ADC CONVERTER */
ADCF	DATA	0F6H
ADDH	DATA	0F4H
ADDL	DATA	0F5H
ADCON	DATA	0F3H
ADCLK	DATA	0F2H


/* PCA */

CH	DATA	0F9H
CL	DATA	0E9H
CMOD	DATA	0D9H

CCON	DATA	0D8H
;--- CCON bits -----
CF   	DATA	0DFH
CR   	DATA	0DEH
CCF4  	DATA	0DCH
CCF3  	DATA	0DBH
CCF2  	DATA	0DAH
CCF1  	DATA	0D9H
CCF0  	DATA	0D8H	

CCAPM4	DATA	0DEH
CCAPM3	DATA	0DDH
CCAPM2	DATA	0DCH
CCAPM2	DATA	0DCH
CCAPM1	DATA	0DBH
CCAPM0	DATA	0DAH

CCAP4L	DATA	0EEH
CCAP3L	DATA	0EDH
CCAP2L	DATA	0ECH
CCAP1L	DATA	0EBH
CCAP0L	DATA	0EAH

CCAP4H	DATA	0FEH
CCAP3H	DATA	0FDH
CCAP2H	DATA	0FCH
CCAP1H	DATA	0FBH
CCAP0H	DATA	0FAH

$RESTORE