;STC12C5630AD.INC
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
SPSTAT      DATA        084H
SPCTL       DATA        085H
SPDAT       DATA        086H
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
WAKE_CLKO   DATA        08FH
                        
P1          DATA        090H
P10         BIT         P1.0
P11         BIT         P1.1
P12         BIT         P1.2
P13         BIT         P1.3
P14         BIT         P1.4
P15         BIT         P1.5
P16         BIT         P1.6
P17         BIT         P1.7

P1M0        DATA        091H
P1M1        DATA        092H
P0M0        DATA        093H
P0M1        DATA        094H
P2M0        DATA        095H
P2M1        DATA        096H

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

CEX3        BIT         P2^4
CEX2        BIT         P2^0
                        
IE          DATA        0A8H
EA          BIT         IE.7
EPCA_LVD    BIT         IE.6
EADC_SPI    BIT         IE.5
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

CEX0        BIT         P3.7
CEX1        BIT         P3.5
ECI         BIT         P3.4
                        
P3M0        DATA        0B1H
P3M1        DATA        0B2H

IPH         DATA        0B7H
 
IP          DATA        0B8H
PPCA_LVD    BIT         IP.6
PADC_SPI    BIT         IP.5
PS          BIT         IP.4
PT1         BIT         IP.3
PX1         BIT         IP.2
PT0         BIT         IP.1
PX0         BIT         IP.0
                        
SADEN       DATA        0B9H
ADC_LOW2    DATA        0BEH
ADC_CONTR   DATA        0C5H
ADC_DATA    DATA        0C6H
CLK_DIV     DATA        0C7H
                        
PSW         DATA        0D0H
CY          BIT         PSW.7
AC          BIT         PSW.6
F0          BIT         PSW.5
RS1         BIT         PSW.4
RS0         BIT         PSW.3
OV          BIT         PSW.2
F1          BIT         PSW.1
P           BIT         PSW.0

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

ACC         DATA        0E0H

WDT_CONTR   DATA        0E1H
ISP_DATA    DATA        0E2H
ISP_ADDRH   DATA        0E3H
ISP_ADDRL   DATA        0E4H
ISP_CMD     DATA        0E5H
ISP_TRIG    DATA        0E6H
ISP_CONTR   DATA        0E7H

CL          DATA        0E9H
CCAP0L      DATA        0EAH
CCAP1L      DATA        0EBH
CCAP2L      DATA        0ECH
CCAP3L      DATA        0EDH

B           DATA        0F0H

PCA_PWM0    DATA        0F2H
PCA_PWM1    DATA        0F3H
PCA_PWM2    DATA        0F4H
PCA_PWM3    DATA        0F5H
CH          DATA        0F9H
CCAP0H      DATA        0FAH
CCAP1H      DATA        0FBH
CCAP2H      DATA        0FCH
CCAP3H      DATA        0FDH

$RESTORE

