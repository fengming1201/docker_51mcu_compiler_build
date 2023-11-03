;STC89C5xRC_RDP.INC
;包含本头文件后,不用另外再包含"REG51.INC"

$NOMOD51

$SAVE
$NOLIST

P0          DATA        080H
P00         BIT         P0.0
P01         BIT         P0.1
P02         BIT         P0.2
P03         BIT         P0.3
P04         BIT         P0.4
P05         BIT         P0.5
P06         BIT         P0.6
P07         BIT         P0.7

SP          DATA        081H
DPL         DATA        082H
DPH         DATA        083H
PCON        DATA        087H
                        
TCON        DATA        088H
TF1         BIT         TCON.7
TR1         BIT         TCON.6
TF0         BIT         TCON.5
TR0         BIT         TCON.4
IE1         BIT         TCON.3
IT1         BIT         TCON.2
IE0         BIT         TCON.1
IT0         BIT         TCON.0
                        
TMOD        DATA        089H
TL0         DATA        08AH
TL1         DATA        08BH
TH0         DATA        08CH
TH1         DATA        08DH
AUXR        DATA        08EH
                        
P1          DATA        090H
P10         BIT         P1.0
P11         BIT         P1.1
P12         BIT         P1.2
P13         BIT         P1.3
P14         BIT         P1.4
P15         BIT         P1.5
P16         BIT         P1.6
P17         BIT         P1.7

T2          BIT         P1.0
T2EX        BIT         P1.1

SCON        DATA        098H
SM0         BIT         SCON.7
SM1         BIT         SCON.6
SM2         BIT         SCON.5
REN         BIT         SCON.4
TB8         BIT         SCON.3
RB8         BIT         SCON.2
TI          BIT         SCON.1
RI          BIT         SCON.0
                        
SBUF        DATA        099H
                        
P2          DATA        0A0H
P20         BIT         P2.0
P21         BIT         P2.1
P22         BIT         P2.2
P23         BIT         P2.3
P24         BIT         P2.4
P25         BIT         P2.5
P26         BIT         P2.6
P27         BIT         P2.7
                        
AUXR1       DATA        0A2H
                        
IE          DATA        0A8H
EA          BIT         IE.7
ET2         BIT         IE.5
ES          BIT         IE.4
ET1         BIT         IE.3
EX1         BIT         IE.2
ET0         BIT         IE.1
EX0         BIT         IE.0
                        
SADDR       DATA        0A9H
                        
P3          DATA        0B0H
P30         BIT         P3.0
P31         BIT         P3.1
P32         BIT         P3.2
P33         BIT         P3.3
P34         BIT         P3.4
P35         BIT         P3.5
P36         BIT         P3.6
P37         BIT         P3.7
                        
RD          BIT         P3.7
WR          BIT         P3.6
T1          BIT         P3.5
T0          BIT         P3.4
INT1        BIT         P3.3
INT0        BIT         P3.2
TXD         BIT         P3.1
RXD         BIT         P3.0
                        
IPH         DATA        0B7H
 
IP          DATA        0B8H
PT2         BIT         IP.5
PS          BIT         IP.4
PT1         BIT         IP.3
PX1         BIT         IP.2
PT0         BIT         IP.1
PX0         BIT         IP.0
                        
SADEN       DATA        0B9H

XICON       DATA        0C0H
PX3         BIT         XICON.7
EX3         BIT         XICON.6
IE3         BIT         XICON.5
IT3         BIT         XICON.4
PX2         BIT         XICON.3
EX3         BIT         XICON.2
IE2         BIT         XICON.1
IT2         BIT         XICON.0

T2CON       DATA        0C8H
TF2         BIT         T2CON.7
EXF2        BIT         T2CON.6
RCLK        BIT         T2CON.5
TCLK        BIT         T2CON.4
EXEN2       BIT         T2CON.3
TR2         BIT         T2CON.2
C_T2        BIT         T2CON.1
CP_RL2      BIT         T2CON.0

T2MOD       DATA        0C9H
RCAP2L      DATA        0CAH
RCAP2H      DATA        0CBH
TL2         DATA        0CCH
TH2         DATA        0CDH
                        
PSW         DATA        0D0H
CY          BIT         PSW.7
AC          BIT         PSW.6
F0          BIT         PSW.5
RS1         BIT         PSW.4
RS0         BIT         PSW.3
OV          BIT         PSW.2
F1          BIT         PSW.1
P           BIT         PSW.0

ACC         DATA        0E0H

WDT_CONTR   DATA        0E1H
ISP_DATA    DATA        0E2H
ISP_ADDRH   DATA        0E3H
ISP_ADDRL   DATA        0E4H
ISP_CMD     DATA        0E5H
ISP_TRIG    DATA        0E6H
ISP_CONTR   DATA        0E7H

P4          DATA        0E8H
P40         BIT         P4.0
P41         BIT         P4.1
P42         BIT         P4.2
P43         BIT         P4.3
P44         BIT         P4.4
P45         BIT         P4.5
P46         BIT         P4.6
P47         BIT         P4.7

B           DATA        0F0H


$RESTORE

