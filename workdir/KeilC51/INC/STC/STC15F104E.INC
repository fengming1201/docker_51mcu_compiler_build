;STC15F104E.INC
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
INT_CLKO    DATA        08FH
                        
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
CLK_DIV     DATA        097H
                        
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
P1ASF       DATA        09DH
                        
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
AUXR1       DATA        0A2H
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
IRC_CLKO    DATA        0BBH
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
CCF2        BIT         CCON.2
CCF1        BIT         CCON.1
CCF0        BIT         CCON.0
                        
CMOD        DATA        0D9H
CCAPM0      DATA        0DAH
CCAPM1      DATA        0DBH
CCAPM2      DATA        0DCH
ACC         DATA        0E0H
P7M1        DATA        0E1H
P7M0        DATA        0E2H
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
B           DATA        0F0H
PWMCFG      DATA        0F1H
PCA_PWM0    DATA        0F2H
PCA_PWM1    DATA        0F3H
PCA_PWM2    DATA        0F4H
PWMCR       DATA        0F5H
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


$RESTORE

