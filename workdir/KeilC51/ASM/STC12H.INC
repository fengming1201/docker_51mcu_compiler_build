;STC12H.INC
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
S4CON       DATA        084H
S4BUF       DATA        085H
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
S3CON       DATA        0ACH
S3BUF       DATA        0ADH
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
PPCA        BIT         IP.7
PLVD        BIT         IP.6
PADC        BIT         IP.5
PS          BIT         IP.4
PT1         BIT         IP.3
PX1         BIT         IP.2
PT0         BIT         IP.1
PX0         BIT         IP.0
                        
SADEN       DATA        0B9H
P_SW2       DATA        0BAH
VOCTRL      DATA        0BBH
ADC_CONTR   DATA        0BCH
ADC_RES     DATA        0BDH
ADC_RESL    DATA        0BEH
                        
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
P6M1        DATA        0CBH
P6M0        DATA        0CCH
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

CCON        DATA        0D8H
CF          BIT         CCON.7
CR          BIT         CCON.6
CCF3        BIT         CCON.3
CCF2        BIT         CCON.2
CCF1        BIT         CCON.1
CCF0        BIT         CCON.0
                        
CMOD        DATA        0D9H
CCAPM0      DATA        0DAH
CCAPM1      DATA        0DBH
CCAPM2      DATA        0DCH
ADCCFG      DATA        0DEH
IP3         DATA        0DFH
ACC         DATA        0E0H
P7M1        DATA        0E1H
P7M0        DATA        0E2H
DPS         DATA        0E3H
DPL1        DATA        0E4H
DPH1        DATA        0E5H
CMPCR1      DATA        0E6H
CMPCR2      DATA        0E7H
                        
P6          DATA        0E8H
P60         BIT         P6.0
P61         BIT         P6.1
P62         BIT         P6.2
P63         BIT         P6.3
P64         BIT         P6.4
P65         BIT         P6.5
P66         BIT         P6.6
P67         BIT         P6.7
                        
CL          DATA        0E9H
CCAP0L      DATA        0EAH
CCAP1L      DATA        0EBH
CCAP2L      DATA        0ECH
IP3H        DATA        0EEH
AUXINTIF    DATA        0EFH
B           DATA        0F0H
PCA_PWM0    DATA        0F2H
PCA_PWM1    DATA        0F3H
PCA_PWM2    DATA        0F4H
IAP_TPS     DATA        0F5H
                        
P7          DATA        0F8H
P70         BIT         P7.0
P71         BIT         P7.1
P72         BIT         P7.2
P73         BIT         P7.3
P74         BIT         P7.4
P75         BIT         P7.5
P76         BIT         P7.6
P77         BIT         P7.7
                        
CH          DATA        0F9H
CCAP0H      DATA        0FAH
CCAP1H      DATA        0FBH
CCAP2H      DATA        0FCH
RSTCFG      DATA        0FFH

;如下特殊功能寄存器位于扩展RAM区域
;访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写

CCAPM3          EQU     0FD54H
CCAP3L          EQU     0FD55H
CCAP3H          EQU     0FD56H
PCA_PWM3        EQU     0FD57H
                    
CLKSEL          EQU     0FE00H
CLKDIV          EQU     0FE01H
HIRCCR          EQU     0FE02H
XOSCCR          EQU     0FE03H
IRC32KCR        EQU     0FE04H
MCLKOCR         EQU     0FE05H
IRC48MCR        EQU     0FE07H
P0PU            EQU     0FE10H
P1PU            EQU     0FE11H
P2PU            EQU     0FE12H
P3PU            EQU     0FE13H
P4PU            EQU     0FE14H
P5PU            EQU     0FE15H
P6PU            EQU     0FE16H
P7PU            EQU     0FE17H
P0NCS           EQU     0FE18H
P1NCS           EQU     0FE19H
P2NCS           EQU     0FE1AH
P3NCS           EQU     0FE1BH
P4NCS           EQU     0FE1CH
P5NCS           EQU     0FE1DH
P6NCS           EQU     0FE1EH
P7NCS           EQU     0FE1FH
P0SR            EQU     0FE20H
P1SR            EQU     0FE21H
P2SR            EQU     0FE22H
P3SR            EQU     0FE23H
P4SR            EQU     0FE24H
P5SR            EQU     0FE25H
P6SR            EQU     0FE26H
P7SR            EQU     0FE27H
P0DR            EQU     0FE28H
P1DR            EQU     0FE29H
P2DR            EQU     0FE2AH
P3DR            EQU     0FE2BH
P4DR            EQU     0FE2CH
P5DR            EQU     0FE2DH
P6DR            EQU     0FE2EH
P7DR            EQU     0FE2FH
P0IE            EQU     0FE30H
P1IE            EQU     0FE31H
P2IE            EQU     0FE32H
P3IE            EQU     0FE33H
P4IE            EQU     0FE34H
P5IE            EQU     0FE35H
P6IE            EQU     0FE36H
P7IE            EQU     0FE37H
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
ADCTIM          EQU     0FEA8H
T3T4PIN         EQU     0FEACH
PWM1_ETRPS      EQU     0FEB0H
PWM1_ENO        EQU     0FEB1H
PWM1_PS         EQU     0FEB2H
PWM1_IOAUX      EQU     0FEB3H
PWM2_ETRPS      EQU     0FEB4H
PWM2_ENO        EQU     0FEB5H
PWM2_PS         EQU     0FEB6H
PWM2_IOAUX      EQU     0FEB7H
PWM1_CR1        EQU     0FEC0H
PWM1_CR2        EQU     0FEC1H
PWM1_SMCR       EQU     0FEC2H
PWM1_ETR        EQU     0FEC3H
PWM1_IER        EQU     0FEC4H
PWM1_SR1        EQU     0FEC5H
PWM1_SR2        EQU     0FEC6H
PWM1_EGR        EQU     0FEC7H
PWM1_CCMR1      EQU     0FEC8H
PWM1_CCMR2      EQU     0FEC9H
PWM1_CCMR3      EQU     0FECAH
PWM1_CCMR4      EQU     0FECBH
PWM1_CCER1      EQU     0FECCH
PWM1_CCER2      EQU     0FECDH
PWM1_CNTR       EQU     0FECEH
PWM1_CNTRH      EQU     0FECEH
PWM1_CNTRL      EQU     0FECFH
PWM1_PSCR       EQU     0FED0H
PWM1_PSCRH      EQU     0FED0H
PWM1_PSCRL      EQU     0FED1H
PWM1_ARR        EQU     0FED2H
PWM1_ARRH       EQU     0FED2H
PWM1_ARRL       EQU     0FED3H
PWM1_RCR        EQU     0FED4H
PWM1_CCR1       EQU     0FED5H
PWM1_CCR1H      EQU     0FED5H
PWM1_CCR1L      EQU     0FED6H
PWM1_CCR2       EQU     0FED7H
PWM1_CCR2H      EQU     0FED7H
PWM1_CCR2L      EQU     0FED8H
PWM1_CCR3       EQU     0FED9H
PWM1_CCR3H      EQU     0FED9H
PWM1_CCR3L      EQU     0FEDAH
PWM1_CCR4       EQU     0FEDBH
PWM1_CCR4H      EQU     0FEDBH
PWM1_CCR4L      EQU     0FEDCH
PWM1_BKR        EQU     0FEDDH
PWM1_DTR        EQU     0FEDEH
PWM1_OISR       EQU     0FEDFH
PWM2_CR1        EQU     0FEE0H
PWM2_CR2        EQU     0FEE1H
PWM2_SMCR       EQU     0FEE2H
PWM2_ETR        EQU     0FEE3H
PWM2_IER        EQU     0FEE4H
PWM2_SR1        EQU     0FEE5H
PWM2_SR2        EQU     0FEE6H
PWM2_EGR        EQU     0FEE7H
PWM2_CCMR1      EQU     0FEE8H
PWM2_CCMR2      EQU     0FEE9H
PWM2_CCMR3      EQU     0FEEAH
PWM2_CCMR4      EQU     0FEEBH
PWM2_CCER1      EQU     0FEECH
PWM2_CCER2      EQU     0FEEDH
PWM2_CNTR       EQU     0FEEEH
PWM2_CNTRH      EQU     0FEEEH
PWM2_CNTRL      EQU     0FEEFH
PWM2_PSCR       EQU     0FEF0H
PWM2_PSCRH      EQU     0FEF0H
PWM2_PSCRL      EQU     0FEF1H
PWM2_ARR        EQU     0FEF2H
PWM2_ARRH       EQU     0FEF2H
PWM2_ARRL       EQU     0FEF3H
PWM2_RCR        EQU     0FEF4H
PWM2_CCR1       EQU     0FEF5H
PWM2_CCR1H      EQU     0FEF5H
PWM2_CCR1L      EQU     0FEF6H
PWM2_CCR2       EQU     0FEF7H
PWM2_CCR2H      EQU     0FEF7H
PWM2_CCR2L      EQU     0FEF8H
PWM2_CCR3       EQU     0FEF9H
PWM2_CCR3H      EQU     0FEF9H
PWM2_CCR3L      EQU     0FEFAH
PWM2_CCR4       EQU     0FEFBH
PWM2_CCR4H      EQU     0FEFBH
PWM2_CCR4L      EQU     0FEFCH
PWM2_BKR        EQU     0FEFDH
PWM2_DTR        EQU     0FEFEH
PWM2_OISR       EQU     0FEFFH
                    
P0INTE          EQU     0FD00H
P1INTE          EQU     0FD01H
P2INTE          EQU     0FD02H
P3INTE          EQU     0FD03H
P4INTE          EQU     0FD04H
P5INTE          EQU     0FD05H
P6INTE          EQU     0FD06H
P7INTE          EQU     0FD07H
P0INTF          EQU     0FD10H
P1INTF          EQU     0FD11H
P2INTF          EQU     0FD12H
P3INTF          EQU     0FD13H
P4INTF          EQU     0FD14H
P5INTF          EQU     0FD15H
P6INTF          EQU     0FD16H
P7INTF          EQU     0FD17H
P0IM0           EQU     0FD20H
P1IM0           EQU     0FD21H
P2IM0           EQU     0FD22H
P3IM0           EQU     0FD23H
P4IM0           EQU     0FD24H
P5IM0           EQU     0FD25H
P6IM0           EQU     0FD26H
P7IM0           EQU     0FD27H
P0IM1           EQU     0FD30H
P1IM1           EQU     0FD31H
P2IM1           EQU     0FD32H
P3IM1           EQU     0FD33H
P4IM1           EQU     0FD34H
P5IM1           EQU     0FD35H
P6IM1           EQU     0FD36H
P7IM1           EQU     0FD37H
                    
MD3             EQU     0FCF0H
MD2             EQU     0FCF1H
MD1             EQU     0FCF2H
MD0             EQU     0FCF3H
MD5             EQU     0FCF4H
MD4             EQU     0FCF5H
ARCON           EQU     0FCF6H
OPCON           EQU     0FCF7H

$RESTORE

