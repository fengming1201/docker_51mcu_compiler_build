;STC8C.INC
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
INTCLKO     DATA        08FH
                        
P1          DATA        090H
P10         BIT         P1.0
P11         BIT         P1.1
P12         BIT         P1.2
P13         BIT         P1.3
P14         BIT         P1.4
P15         BIT         P1.5
P16         BIT         P1.6
P17         BIT         P1.7
                        
P1M1        DATA        091H
P1M0        DATA        092H
P0M1        DATA        093H
P0M0        DATA        094H
P2M1        DATA        095H
P2M0        DATA        096H
                        
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
S2CON       DATA        09AH
S2BUF       DATA        09BH
IRCBAND     DATA        09DH
LIRTRIM     DATA        09EH
IRTRIM      DATA        09FH
                        
P2          DATA        0A0H
P20         BIT         P2.0
P21         BIT         P2.1
P22         BIT         P2.2
P23         BIT         P2.3
P24         BIT         P2.4
P25         BIT         P2.5
P26         BIT         P2.6
P27         BIT         P2.7
                        
BUS_SPEED   DATA        0A1H
P_SW1       DATA        0A2H
                        
IE          DATA        0A8H
EA          BIT         IE.7
ELVD        BIT         IE.6
EADC        BIT         IE.5
ES          BIT         IE.4
ET1         BIT         IE.3
EX1         BIT         IE.2
ET0         BIT         IE.1
EX0         BIT         IE.0
                        
SADDR       DATA        0A9H
WKTCL       DATA        0AAH
WKTCH       DATA        0ABH
TA          DATA        0AEH
IE2         DATA        0AFH
                        
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
                        
P3M1        DATA        0B1H
P3M0        DATA        0B2H
P4M1        DATA        0B3H
P4M0        DATA        0B4H
IP2         DATA        0B5H
IP2H        DATA        0B6H
IPH         DATA        0B7H
                        
IP          DATA        0B8H
PLVD        BIT         IP.6
PS          BIT         IP.4
PT1         BIT         IP.3
PX1         BIT         IP.2
PT0         BIT         IP.1
PX0         BIT         IP.0
                        
SADEN       DATA        0B9H
P_SW2       DATA        0BAH
                        
P4          DATA        0C0H
P40         BIT         P4.0
P41         BIT         P4.1
P42         BIT         P4.2
P43         BIT         P4.3
P44         BIT         P4.4
P45         BIT         P4.5
P46         BIT         P4.6
P47         BIT         P4.7
                        
WDT_CONTR   DATA        0C1H
IAP_DATA    DATA        0C2H
IAP_ADDRH   DATA        0C3H
IAP_ADDRL   DATA        0C4H
IAP_CMD     DATA        0C5H
IAP_TRIG    DATA        0C6H
IAP_CONTR   DATA        0C7H
                        
P5          DATA        0C8H
P50         BIT         P5.0
P51         BIT         P5.1
P52         BIT         P5.2
P53         BIT         P5.3
P54         BIT         P5.4
P55         BIT         P5.5
P56         BIT         P5.6
P57         BIT         P5.7
                        
P5M1        DATA        0C9H
P5M0        DATA        0CAH
SPSTAT      DATA        0CDH
SPCTL       DATA        0CEH
SPDAT       DATA        0CFH
                        
PSW         DATA        0D0H
CY          BIT         PSW.7
AC          BIT         PSW.6
F0          BIT         PSW.5
RS1         BIT         PSW.4
RS0         BIT         PSW.3
OV          BIT         PSW.2
F1          BIT         PSW.1
P           BIT         PSW.0
                        
T4T3M       DATA        0D1H
T4H         DATA        0D2H
T4L         DATA        0D3H
T3H         DATA        0D4H
T3L         DATA        0D5H
T2H         DATA        0D6H
T2L         DATA        0D7H
                        
T3T4M       DATA        0D1H
TH4         DATA        0D2H
TL4         DATA        0D3H
TH3         DATA        0D4H
TL3         DATA        0D5H
TH2         DATA        0D6H
TL2         DATA        0D7H

IP3         DATA        0DFH
ACC         DATA        0E0H
DPS         DATA        0E3H
DPL1        DATA        0E4H
DPH1        DATA        0E5H
CMPCR1      DATA        0E6H
CMPCR2      DATA        0E7H
IP3H        DATA        0EEH
AUXINTIF    DATA        0EFH
B           DATA        0F0H
IAP_TPS     DATA        0F5H
RSTCFG      DATA        0FFH

;如下特殊功能寄存器位于扩展RAM区域
;访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写

CLKSEL          EQU     0FE00H
CLKDIV          EQU     0FE01H
HIRCCR          EQU     0FE02H
XOSCCR          EQU     0FE03H
IRC32KCR        EQU     0FE04H
MCLKOCR         EQU     0FE05H
IRCDB           EQU     0FE06H
                
P0PU            EQU     0FE10H
P1PU            EQU     0FE11H
P2PU            EQU     0FE12H
P3PU            EQU     0FE13H
P4PU            EQU     0FE14H
P5PU            EQU     0FE15H
P0NCS           EQU     0FE18H
P1NCS           EQU     0FE19H
P2NCS           EQU     0FE1AH
P3NCS           EQU     0FE1BH
P4NCS           EQU     0FE1CH
P5NCS           EQU     0FE1DH
P0SR            EQU     0FE20H
P1SR            EQU     0FE21H
P2SR            EQU     0FE22H
P3SR            EQU     0FE23H
P4SR            EQU     0FE24H
P5SR            EQU     0FE25H
P0DR            EQU     0FE28H
P1DR            EQU     0FE29H
P2DR            EQU     0FE2AH
P3DR            EQU     0FE2BH
P4DR            EQU     0FE2CH
P5DR            EQU     0FE2DH
P0IE            EQU     0FE30H
P1IE            EQU     0FE31H
                
I2CCFG          EQU     0FE80H
I2CMSCR         EQU     0FE81H
I2CMSST         EQU     0FE82H
I2CSLCR         EQU     0FE83H
I2CSLST         EQU     0FE84H
I2CSLADR        EQU     0FE85H
I2CTXD          EQU     0FE86H
I2CRXD          EQU     0FE87H
I2CMSAUX        EQU     0FE88H
                
TM2PS           EQU     0FEA2H
TM3PS           EQU     0FEA3H
TM4PS           EQU     0FEA4H
                
P0INTE          EQU     0FD00H
P1INTE          EQU     0FD01H
P2INTE          EQU     0FD02H
P3INTE          EQU     0FD03H
P4INTE          EQU     0FD04H
P5INTE          EQU     0FD05H
P0INTF          EQU     0FD10H
P1INTF          EQU     0FD11H
P2INTF          EQU     0FD12H
P3INTF          EQU     0FD13H
P4INTF          EQU     0FD14H
P5INTF          EQU     0FD15H
P0IM0           EQU     0FD20H
P1IM0           EQU     0FD21H
P2IM0           EQU     0FD22H
P3IM0           EQU     0FD23H
P4IM0           EQU     0FD24H
P5IM0           EQU     0FD25H
P0IM1           EQU     0FD30H
P1IM1           EQU     0FD31H
P2IM1           EQU     0FD32H
P3IM1           EQU     0FD33H
P4IM1           EQU     0FD34H
P5IM1           EQU     0FD35H
                
MD3             EQU     0FCF0H
MD2             EQU     0FCF1H
MD1             EQU     0FCF2H
MD0             EQU     0FCF3H
MD5             EQU     0FCF4H
MD4             EQU     0FCF5H
ARCON           EQU     0FCF6H
OPCON           EQU     0FCF7H

$RESTORE

