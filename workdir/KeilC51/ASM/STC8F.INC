;STC8F.INC
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
AUXR2       DATA        097H
                        
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
CCAPM3      DATA        0DDH
ADCCFG      DATA        0DEH
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
CCAP3L      DATA        0EDH
AUXINTIF    DATA        0EFH
B           DATA        0F0H
PWMCFG      DATA        0F1H
PCA_PWM0    DATA        0F2H
PCA_PWM1    DATA        0F3H
PCA_PWM2    DATA        0F4H
PCA_PWM3    DATA        0F5H
PWMIF       DATA        0F6H
PWMFDCR     DATA        0F7H
                        
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
CCAP3H      DATA        0FDH
PWMCR       DATA        0FEH
RSTCFG      DATA        0FFH

;如下特殊功能寄存器位于扩展RAM区域
;访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写

PWMC            EQU     0FFF0H
PWMCH           EQU     0FFF0H
PWMCL           EQU     0FFF1H
PWMCKS          EQU     0FFF2H
TADCP           EQU     0FFF3H
TADCPH          EQU     0FFF3H
TADCPL          EQU     0FFF4H
PWM0T1          EQU     0FF00H
PWM0T1H         EQU     0FF00H
PWM0T1L         EQU     0FF01H
PWM0T2          EQU     0FF02H
PWM0T2H         EQU     0FF02H
PWM0T2L         EQU     0FF03H
PWM0CR          EQU     0FF04H
PWM0HLD         EQU     0FF05H
PWM1T1          EQU     0FF10H
PWM1T1H         EQU     0FF10H
PWM1T1L         EQU     0FF11H
PWM1T2          EQU     0FF12H
PWM1T2H         EQU     0FF12H
PWM1T2L         EQU     0FF13H
PWM1CR          EQU     0FF14H
PWM1HLD         EQU     0FF15H
PWM2T1          EQU     0FF20H
PWM2T1H         EQU     0FF20H
PWM2T1L         EQU     0FF21H
PWM2T2          EQU     0FF22H
PWM2T2H         EQU     0FF22H
PWM2T2L         EQU     0FF23H
PWM2CR          EQU     0FF24H
PWM2HLD         EQU     0FF25H
PWM3T1          EQU     0FF30H
PWM3T1H         EQU     0FF30H
PWM3T1L         EQU     0FF31H
PWM3T2          EQU     0FF32H
PWM3T2H         EQU     0FF32H
PWM3T2L         EQU     0FF33H
PWM3CR          EQU     0FF34H
PWM3HLD         EQU     0FF35H
PWM4T1          EQU     0FF40H
PWM4T1H         EQU     0FF40H
PWM4T1L         EQU     0FF41H
PWM4T2          EQU     0FF42H
PWM4T2H         EQU     0FF42H
PWM4T2L         EQU     0FF43H
PWM4CR          EQU     0FF44H
PWM4HLD         EQU     0FF45H
PWM5T1          EQU     0FF50H
PWM5T1H         EQU     0FF50H
PWM5T1L         EQU     0FF51H
PWM5T2          EQU     0FF52H
PWM5T2H         EQU     0FF52H
PWM5T2L         EQU     0FF53H
PWM5CR          EQU     0FF54H
PWM5HLD         EQU     0FF55H
PWM6T1          EQU     0FF60H
PWM6T1H         EQU     0FF60H
PWM6T1L         EQU     0FF61H
PWM6T2          EQU     0FF62H
PWM6T2H         EQU     0FF62H
PWM6T2L         EQU     0FF63H
PWM6CR          EQU     0FF64H
PWM6HLD         EQU     0FF65H
PWM7T1          EQU     0FF70H
PWM7T1H         EQU     0FF70H
PWM7T1L         EQU     0FF71H
PWM7T2          EQU     0FF72H
PWM7T2H         EQU     0FF72H
PWM7T2L         EQU     0FF73H
PWM7CR          EQU     0FF74H
PWM7HLD         EQU     0FF75H
                    
CLKSEL          EQU     0FE00H
CLKDIV          EQU     0FE01H
IRC24MCR        EQU     0FE02H
XOSCCR          EQU     0FE03H
IRC32KCR        EQU     0FE04H
                    
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
                    
I2CCFG          EQU     0FE80H
I2CMSCR         EQU     0FE81H
I2CMSST         EQU     0FE82H
I2CSLCR         EQU     0FE83H
I2CSLST         EQU     0FE84H
I2CSLADR        EQU     0FE85H
I2CTXD          EQU     0FE86H
I2CRXD          EQU     0FE87H

$RESTORE

