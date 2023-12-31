;-------------------------------------------------------------------------------
; Copyright 1995-1996 KEIL Software, Inc.
; 80515A Processor Declarations
;-------------------------------------------------------------------------------
$SAVE
$NOLIST
;
; BYTE Register
P0	DATA	080H
SP	DATA	081H
DPL     DATA	082H
DPH     DATA	083H
WDTREL  DATA	086H
PCON    DATA	087H
TCON    DATA	088H
TMOD    DATA	089H
TL0     DATA	08AH
TL1     DATA	08BH
TH0     DATA	08CH
TH1     DATA	08DH
P1      DATA	090H
XPAGE   DATA	091H
SCON    DATA	098H
SBUF    DATA	099H

P2      DATA	0A0H
IEN0    DATA	0A8H
IP0     DATA	0A9H
SRELL   DATA	0AAH
P3      DATA	0B0H
SYSCON  DATA	0B1H
IEN1    DATA	0B8H
IP1     DATA	0B9H
SRELH   DATA	0BAH

IRCON   DATA	0C0H
CCEN    DATA	0C1H
CCL1    DATA	0C2H
CCH1    DATA	0C3H
CCL2    DATA	0C4H
CCH2    DATA	0C5H
CCL3    DATA	0C6H
CCH3    DATA	0C7H
T2CON   DATA	0C8H
CRCL    DATA	0CAH
CRCH    DATA	0CBH
TL2     DATA	0CCH
TH2     DATA	0CDH
PSW     DATA	0D0H
ADCON0	DATA	0D8H
ADDATH  DATA	0D9H
ADDATL  DATA	0DAH
P6      DATA	0DBH
ADCON1  DATA	0DCH

ACC     DATA	0E0H
P4      DATA	0E8H
B       DATA	0F0H
P5      DATA	0F8H


; BIT Register
; PSW
CY      BIT     0D7H
AC      BIT     0D6H
F0      BIT     0D5H
RS1     BIT     0D4H
RS0     BIT     0D3H
OV      BIT     0D2H
F1      BIT     0D1H
P       BIT     0D0H
; TCON
TF1     BIT     8FH
TR1     BIT     8EH
TF0     BIT     8DH
TR0     BIT     8CH
IE1     BIT     8BH
IT1     BIT     8AH
IE0     BIT     89H
IT0     BIT     88H
; IEN0
EAL     BIT     0AFH
WDT     BIT     0AEH
ET2     BIT     0ADH
ES      BIT     0ACH
ET1     BIT     0ABH
EX1     BIT     0AAH
ET0     BIT     0A9H
EX0     BIT     0A8H
; IEN1
EXEN2   BIT     0BFH
SWDT    BIT     0BEH
EX6     BIT     0BDH
EX5     BIT     0BCH
EX4     BIT     0BBH
EX3     BIT     0BAH
EX2     BIT     0B9H
EADC    BIT     0B8H
; P3
RD      BIT     0B7H
WR      BIT     0B6H
T1      BIT     0B5H
T0      BIT     0B4H
INT1    BIT     0B3H
INT0    BIT     0B2H
TXD     BIT     0B1H
RXD     BIT     0B0H
; SCON
SM0     BIT     9FH
SM1     BIT     9EH
SM2     BIT     9DH
REN     BIT     9CH
TB8     BIT     9BH
RB8     BIT     9AH
TI      BIT     99H
RI      BIT     98H
; T2CON
T2PS    BIT     0CFH
I3FR    BIT     0CEH
I2FR    BIT     0CDH
T2R1    BIT     0CCH
T2R0    BIT     0CBH
T2CM    BIT     0CAH
T2I1    BIT     0C9H
T2I0    BIT     0C8H
; ADCON
BD      BIT     0DFH
CLK     BIT     0DEH
BSY     BIT     0DCH
ADM     BIT     0DBH
MX2     BIT     0DAH
MX1     BIT     0D9H
MX0     BIT     0D8H
; IRCON
EXF2    BIT     0C7H
TF2     BIT     0C6H
IEX6    BIT     0C5H
IEX5    BIT     0C4H
IEX4    BIT     0C3H
IEX3    BIT     0C2H
IEX2    BIT     0C1H
IADC    BIT     0C0H
$RESTORE

