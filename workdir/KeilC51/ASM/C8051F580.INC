;------------------------------------------------------------------------------
; Copyright (C) 2010 ARM Ltd and ARM Germany GmbH. All rights reserved.
; Declarations for Silabs C8051F58x and C8051F59x based microcontroller.
;
; Devices:         C8051F580/1/2/3/4/5/6/7/8/9
;                  C8051F590/1
;------------------------------------------------------------------------------

$SAVE
$NOLIST


;------------------------------------------------------------------------------
; Page 0, Page 1 and Page F Registers
;------------------------------------------------------------------------------
P0           DATA 080H                 ; Port 0 Latch
SP           DATA 081H                 ; Stack Pointer
DPL          DATA 082H                 ; Data Pointer Low
DPH          DATA 083H                 ; Data Pointer High
SFR0CN       DATA 084H                 ; SFR Page Control
SFRNEXT      DATA 085H                 ; SFR stack next page
SFRLAST      DATA 086H                 ; SFR stack last page
PCON         DATA 087H                 ; Power Control
TCON         DATA 088H                 ; Timer/Counter Control
TMOD         DATA 089H                 ; Timer/Counter Mode
TL0          DATA 08AH                 ; Timer/Counter 0 Low
TL1          DATA 08BH                 ; Timer/Counter 1 Low
TH0          DATA 08CH                 ; Timer/Counter 0 High
TH1          DATA 08DH                 ; Timer/Counter 1 High
CKCON        DATA 08EH                 ; Clock Control
PSCTL        DATA 08FH                 ; Program Store R/W Control
CLKSEL       DATA 08FH                 ; System clock select
P1           DATA 090H                 ; Port 1 Latch
TMR3CN       DATA 091H                 ; Timer/Counter 3 Control
TMR5CN       DATA 091H                 ; Timer/Counter 5 Control
TMR3RLL      DATA 092H                 ; Timer/Counter 3 Reload Low
TMR5CAPL     DATA 092H                 ; Timer/Counter 5 Capture Low
TMR3RLH      DATA 093H                 ; Timer/Counter 3 Reload High
TMR5CAPH     DATA 093H                 ; Timer/Counter 5 Capture High
TMR3L        DATA 094H                 ; Timer/Counter 3 Low
TMR5L        DATA 094H                 ; Timer/Counter 5 Low
TMR3H        DATA 095H                 ; Timer/Counter 3 High
TMR5H        DATA 095H                 ; Timer/Counter 5 High
TMR5CF       DATA 096H                 ; Timer/Counter 5 Configuration
CLKMUL       DATA 097H                 ; Clock Multiplier
SCON0        DATA 098H                 ; UART0 Control
SCON1        DATA 098H                 ; UART1 Control
SBUF0        DATA 099H                 ; UART0 Data Buffer
SBUF1        DATA 099H                 ; UART1 Data Buffer
CPT0CN       DATA 09AH                 ; Comparator 0 Control
CPT2CN       DATA 09AH                 ; Comparator 2 Control
CPT0MD       DATA 09BH                 ; Comparator 0 Mode
CPT2MD       DATA 09BH                 ; Comparator 2 Mode
CPT0MX       DATA 09CH                 ; Comparator 0 Mux
CPT2MX       DATA 09CH                 ; Comparator 2 Mux
CPT1CN       DATA 09DH                 ; Comparator 1 Control
CPT1MD       DATA 09EH                 ; Comparator 0 Mode
OSCIFIN      DATA 09EH                 ; Internal Oscillator Fine Control
CPT1MX       DATA 09FH                 ; Comparator 1 Mux
OSCXCN       DATA 09FH                 ; External Oscillator Control
P2           DATA 0A0H                 ; Port 2 Latch
SPI0CFG      DATA 0A1H                 ; SPI0 Configuration
OSCICN       DATA 0A1H                 ; Internal Oscillator Control
SPI0CKR      DATA 0A2H                 ; SPI0 Clock rate control
OSCICRS      DATA 0A2H                 ; Internal Oscillator Coarse Control
SPI0DAT      DATA 0A3H                 ; SPI0 Data Buffer
P0MDOUT      DATA 0A4H                 ; Port 0 Output Mode
P1MDOUT      DATA 0A5H                 ; Port 1 Output Mode
P2MDOUT      DATA 0A6H                 ; Port 2 Output Mode
SFRPAGE      DATA 0A7H                 ; SFR Page Select
IE           DATA 0A8H                 ; Interrupt Enable
SMOD0        DATA 0A9H                 ; Serial Port 0 Control
EMI0CN       DATA 0AAH                 ; EMIF Control
EMI0TC       DATA 0AAH                 ; EMIF Timing control
SBCON0       DATA 0ABH                 ; UART0 Baud Rate Generator Control
SBRLL0       DATA 0ACH                 ; UART0 Baud Rate Generator Low
SBRLH0       DATA 0ADH                 ; UART0 Baud Rate Generator High
P3MAT        DATA 0AEH                 ; Port 3 Match
P3MDOUT      DATA 0AEH                 ; Port 3 Mode
P3MASK       DATA 0AFH                 ; Port 3 Mask
P4MDOUT      DATA 0AFH                 ; Port 4 Mode
P3           DATA 0B0H                 ; Port 3 Latch
P2MAT        DATA 0B1H                 ; Port 2 Match
P2MASK       DATA 0B2H                 ; Port 2 Mask
EMI0CF       DATA 0B2H                 ; EMIF Configuration
P4           DATA 0B5H                 ; Port 4 Latch
FLSCL        DATA 0B6H                 ; Flash Scale
FLKEY        DATA 0B7H                 ; Flash access limit
IP           DATA 0B8H                 ; Interrupt Priority
SMB0ADR      DATA 0B9H                 ; SMBus0 Slave address
ADC0TK       DATA 0BAH                 ; ADC0 Tracking Mode Select
SMB0ADM      DATA 0BAH                 ; SMBus0 Address Mask
ADC0MX       DATA 0BBH                 ; AMUX0 Channel select
ADC0CF       DATA 0BCH                 ; AMUX0 Channel configuration
ADC0L        DATA 0BDH                 ; ADC0 Data Low
ADC0H        DATA 0BEH                 ; ADC0 Data High
SMB0CN       DATA 0C0H                 ; SMBus0 Control
SMB0CF       DATA 0C1H                 ; SMBus0 Configuration
SMB0DAT      DATA 0C2H                 ; SMBus0 Data
ADC0GTL      DATA 0C3H                 ; ADC0 Greater-Than Compare Low
ADC0GTH      DATA 0C4H                 ; ADC0 Greater-Than Compare High
ADC0LTL      DATA 0C5H                 ; ADC0 Less-Than Compare Word Low
ADC0LTH      DATA 0C6H                 ; ADC0 Less-Than Compare Word High
XBR3         DATA 0C6H                 ; Port I/O Crossbar Control 3
XBR2         DATA 0C7H                 ; Port I/O Crossbar Control 2
TMR2CN       DATA 0C8H                 ; Timer/Counter 2 Control
TMR4CN       DATA 0C8H                 ; Timer/Counter 4 Control
REG0CN       DATA 0C9H                 ; Regulator Control
LIN0CF       DATA 0C9H                 ; LIN 0 Configuration
TMR4CF       DATA 0C9H                 ; Timer/Counter 4 Configuration
TMR2RLL      DATA 0CAH                 ; Timer/Counter 2 Reload Low
TMR4CAPL     DATA 0CAH                 ; Timer/Counter 4 Capture Low
TMR2RLH      DATA 0CBH                 ; Timer/Counter 2 Reload High
TMR4CAPH     DATA 0CBH                 ; Timer/Counter 4 Capture High
TMR2L        DATA 0CCH                 ; Timer/Counter 2 Low
TMR4L        DATA 0CCH                 ; Timer/Counter 4 Low
TMR2H        DATA 0CDH                 ; Timer/Counter 2 High
TMR4H        DATA 0CDH                 ; Timer/Counter 4 High
PCA0CPL5     DATA 0CEH                 ; PCA0 Capture 5 Low
PCA1CPL11    DATA 0CEH                 ; PCA1 Capture 11 Low
PCA0CPH5     DATA 0CFH                 ; PCA0 Capture 5 High
PCA1CPH11    DATA 0CFH                 ; PCA1 Capture 11 High
PSW          DATA 0D0H                 ; Program Status Word
REF0CN       DATA 0D1H                 ; Voltage Reference Control
LIN0DAT      DATA 0D2H                 ; LIN0 Data
LIN0ADR      DATA 0D3H                 ; LIN0 Address
P0SKIP       DATA 0D4H                 ; Port 0 Skip
P1SKIP       DATA 0D5H                 ; Port 1 Skip
P2SKIP       DATA 0D6H                 ; Port 2 Skip
P3SKIP       DATA 0D7H                 ; Port 3 Skip
PCA0CN       DATA 0D8H                 ; PCA0 Control
PCA1CN       DATA 0D8H                 ; PCA1 Control
PCA0MD       DATA 0D9H                 ; PCA0 Mode
PCA1MD       DATA 0D9H                 ; PCA1 Mode
PCA0PWM      DATA 0D9H                 ; PCA0 PWM Control
PCA0CPM0     DATA 0DAH                 ; PCA0 Module 0 Mode Register
PCA1CPM6     DATA 0DAH                 ; PCA1 Module 6 Mode
PCA1PWM      DATA 0DAH                 ; PCA1 PWM Control
PCA0CPM1     DATA 0DBH                 ; PCA0 Module 1 Mode Register
PCA1CPM7     DATA 0DBH                 ; PCA1 Module 7 Mode
PCA0CPM2     DATA 0DCH                 ; PCA0 Module 2 Mode Register
PCA1CPM8     DATA 0DCH                 ; PCA1 Module 8 Mode
PCA0CPM3     DATA 0DDH                 ; PCA0 Module 3 Mode Register
PCA1CPM9     DATA 0DDH                 ; PCA1 Module 9 Mode
PCA0CPM4     DATA 0DEH                 ; PCA0 Module 4 Mode Register
PCA1CPM10    DATA 0DEH                 ; PCA1 Module 10 Mode
PCA0CPM5     DATA 0DFH                 ; PCA0 Module 5 Mode Register
PCA1CPM11    DATA 0DFH                 ; PCA1 Module 11 Mode
ACC          DATA 0E0H                 ; Accumulator
XBR0         DATA 0E1H                 ; Port I/O Crossbar Control 0
XBR1         DATA 0E2H                 ; Port I/O Crossbar Control 1
CCH0CN       DATA 0E3H                 ; Cache control
IT01CF       DATA 0E4H                 ; INT0/INT1 Configuration
EIE1         DATA 0E6H                 ; Extended Interrupt Enable 2
EIE2         DATA 0E7H                 ; Extended Interrupt Enable 2
ADC0CN       DATA 0E8H                 ; ADC0 Control
PCA0CPL1     DATA 0E9H                 ; PCA0 Capture 1 Low
PCA1CPL7     DATA 0E9H                 ; PCA1 Capture 7 Low
PCA0CPH1     DATA 0EAH                 ; PCA0 Capture 1 High
PCA1CPH7     DATA 0EAH                 ; PCA1 Capture 7 High
PCA0CPL2     DATA 0EBH                 ; PCA0 Capture 2 Low
PCA1CPL8     DATA 0EBH                 ; PCA1 Capture 8 Low
PCA0CPH2     DATA 0ECH                 ; PCA0 Capture 2 High
PCA1CPH8     DATA 0ECH                 ; PCA1 Capture 8 High
PCA0CPL3     DATA 0EDH                 ; PCA0 Capture 3 Low
PCA1CPL9     DATA 0EDH                 ; PCA1 Capture 9 Low
PCA0CPH3     DATA 0EEH                 ; PCA0 Capture 3 High
PCA1CPH9     DATA 0EEH                 ; PCA1 Capture 9 High
RSTSRC       DATA 0EFH                 ; Reset Source Configuration/Status
B            DATA 0F0H                 ; B Register
P0MAT        DATA 0F1H                 ; Port 0 Match
P0MDIN       DATA 0F1H                 ; Port 0 Input Mode
P0MASK       DATA 0F2H                 ; Port 0 Mask
P1MDIN       DATA 0F2H                 ; Port 1 Input Mode
P1MAT        DATA 0F3H                 ; Port 1 Match
P2MDIN       DATA 0F3H                 ; Port 2 Input Mode
P1MASK       DATA 0F4H                 ; Port 1 Mask
P3MDIN       DATA 0F4H                 ; Port 3 Input Mode
PSBANK       DATA 0F5H                 ; Program Space Bank Select
EIP1         DATA 0F6H                 ; External Interrupt Priority 1
EIP2         DATA 0F7H                 ; External Interrupt Priority 2
SPI0CN       DATA 0F8H                 ; SPI0 Control
PCA0L        DATA 0F9H                 ; PCA0 Counter Low
PCA1L        DATA 0F9H                 ; PCA1 Counter Low
PCA0H        DATA 0FAH                 ; PCA0 Counter High
PCA1H        DATA 0FAH                 ; PCA1 Counter High
PCA0CPL0     DATA 0FBH                 ; PCA0 Capture 0 Low
PCA1CPL6     DATA 0FBH                 ; PCA1 Capture 6 Low
PCA0CPH0     DATA 0FCH                 ; PCA0 Capture 0 High
PCA1CPH6     DATA 0FCH                 ; PCA1 Capture 6 High
PCA0CPL4     DATA 0FDH                 ; PCA0 Capture 4 Low
PCA1CPL10    DATA 0FDH                 ; PCA1 Capture 10 Low
PCA0CPH4     DATA 0FEH                 ; PCA0 Capture 4 High
PCA1CPH10    DATA 0FEH                 ; PCA1 Capture 10 High
VDM0CN       DATA 0FFH                 ; VDD Monitor Control


;------------------------------------------------------------------------------
; Page C (CAN0) Registers
;------------------------------------------------------------------------------
CAN0CFG      DATA 092H                 ; CAN0 Clock Configuration
CAN0STAT     DATA 094H                 ; Status Register Low Byte
CAN0ERRL     DATA 096H                 ; Error Counter Low Byte
CAN0ERRH     DATA 097H                 ; Error Counter High Byte
CAN0BTL      DATA 09AH                 ; Bit Timing Register Low Byte
CAN0BTH      DATA 09BH                 ; Bit Timing Register High Byte
CAN0IIDL     DATA 09CH                 ; Interrupt Register Low Byte
CAN0IIDH     DATA 09DH                 ; Interrupt Register High Byte
CAN0TST      DATA 09EH                 ; Test Register Low Byte
CAN0BRPE     DATA 0A1H                 ; BRP Extension Register Low Byte
CAN0TR1L     DATA 0A2H                 ; Transmission Request 1 Low Byte
CAN0TR1H     DATA 0A3H                 ; Transmission Request 1 High Byte
CAN0TR2L     DATA 0A4H                 ; Transmission Request 2 Low Byte
CAN0TR2H     DATA 0A5H                 ; Transmission Request 2 High Byte
CAN0ND1L     DATA 0AAH                 ; New Data 1 Low Byte
CAN0ND1H     DATA 0ABH                 ; New Data 1 High Byte
CAN0ND2L     DATA 0ACH                 ; New Data 2 Low Byte
CAN0ND2H     DATA 0ADH                 ; New Data 2 High Byte
CAN0IP1L     DATA 0AEH                 ; Interrupt Pending 1 Low Byte
CAN0IP1H     DATA 0AFH                 ; Interrupt Pending 1 High Byte
CAN0IP2L     DATA 0B2H                 ; Interrupt Pending 2 Low Byte
CAN0IP2H     DATA 0B3H                 ; Interrupt Pending 2 High Byte
CAN0MV1L     DATA 0BAH                 ; Message Valid 1 Low Byte
CAN0MV1H     DATA 0BBH                 ; Message Valid 1 High Byte
CAN0MV2L     DATA 0BCH                 ; Message Valid 2 Low Byte
CAN0MV2H     DATA 0BDH                 ; Message Valid 2 High Byte
CAN0IF1CRL   DATA 0BEH                 ; IF1 Command Request Low Byte
CAN0IF1CRH   DATA 0BFH                 ; IF1 Command Request High Byte
CAN0CN       DATA 0C0H                 ; CAN Control Register Low Byte
CAN0IF1CML   DATA 0C2H                 ; IF1 Command Mask Low Byte
CAN0IF1CMH   DATA 0C3H                 ; IF1 Command Mask High Byte
CAN0IF1M1L   DATA 0C4H                 ; IF1 Mask 1 Low Byte
CAN0IF1M1H   DATA 0C5H                 ; IF1 Mask 1 High Byte
CAN0IF1M2L   DATA 0C6H                 ; IF1 Mask 2 Low Byte
CAN0IF1M2H   DATA 0C7H                 ; IF1 Mask 2 High Byte
CAN0IF1A1L   DATA 0CAH                 ; IF1 Arbitration 1 Low Byte
CAN0IF1A1H   DATA 0CBH                 ; IF1 Arbitration 1 High Byte
CAN0IF1A2L   DATA 0CCH                 ; IF1 Arbitration 2 Low Byte
CAN0IF1A2H   DATA 0CDH                 ; IF1 Arbitration 2 High Byte
CAN0IF2MCL   DATA 0CEH                 ; IF2 Message Control Low Byte
CAN0IF2MCH   DATA 0CFH                 ; IF2 Message Control High Byte
CAN0IF1MCL   DATA 0D2H                 ; IF1 Message Control Low Byte
CAN0IF1MCH   DATA 0D3H                 ; IF1 Message Control High Byte
CAN0IF1DA1L  DATA 0D4H                 ; IF1 Data A 1 Low Byte
CAN0IF1DA1H  DATA 0D5H                 ; IF1 Data A 1 High Byte
CAN0IF1DA2L  DATA 0D6H                 ; IF1 Data A 2 Low Byte
CAN0IF1DA2H  DATA 0D7H                 ; IF1 Data A 2 High Byte
CAN0IF1DB1L  DATA 0DAH                 ; IF1 Data B 1 Low Byte
CAN0IF1DB1H  DATA 0DBH                 ; IF1 Data B 1 High Byte
CAN0IF1DB2L  DATA 0DCH                 ; IF1 Data B 2 Low Byte
CAN0IF1DB2H  DATA 0DDH                 ; IF1 Data B 2 High Byte
CAN0IF2CRL   DATA 0DEH                 ; IF2 Command Request Low Byte
CAN0IF2CRH   DATA 0DFH                 ; IF2 Command Request High Byte
CAN0IF2CML   DATA 0E2H                 ; IF2 Command Mask Low Byte
CAN0IF2CMH   DATA 0E3H                 ; IF2 Command Mask High Byte
CAN0IF2M1L   DATA 0EAH                 ; IF2 Mask 1 Low Byte
CAN0IF2M1H   DATA 0EBH                 ; IF2 Mask 1 High Byte
CAN0IF2M2L   DATA 0ECH                 ; IF2 Mask 2 Low Byte
CAN0IF2M2H   DATA 0EDH                 ; IF2 Mask 2 High Byte
CAN0IF2A1L   DATA 0EEH                 ; IF2 Arbitration 1 Low Byte
CAN0IF2A1H   DATA 0EFH                 ; IF2 Arbitration 1 High Byte
CAN0IF2A2L   DATA 0F2H                 ; IF2 Arbitration 2 Low Byte
CAN0IF2A2H   DATA 0F3H                 ; IF2 Arbitration 2 High Byte
CAN0IF2DA1L  DATA 0F6H                 ; IF2 Data A 1 Low Byte
CAN0IF2DA1H  DATA 0F7H                 ; IF2 Data A 1 High Byte
CAN0IF2DA2L  DATA 0FAH                 ; IF2 Data A 2 Low Byte
CAN0IF2DA2H  DATA 0FBH                 ; IF2 Data A 2 High Byte
CAN0IF2DB1L  DATA 0FCH                 ; IF2 Data B 1 Low Byte
CAN0IF2DB1H  DATA 0FDH                 ; IF2 Data B 1 High Byte
CAN0IF2DB2L  DATA 0FEH                 ; IF2 Data B 2 Low Byte
CAN0IF2DB2H  DATA 0FFH                 ; IF2 Data B 2 High Byte


;------------------------------------------------------------------------------
; Bit Definitions
;------------------------------------------------------------------------------
; TCON 0x88
TF1        BIT TCON.7                  ; Timer 1 Overflow Flag
TR1        BIT TCON.6                  ; Timer 1 On/Off Control
TF0        BIT TCON.5                  ; Timer 0 Overflow Flag
TR0        BIT TCON.4                  ; Timer 0 On/Off Control
IE1        BIT TCON.3                  ; Ext. Interrupt 1 Edge Flag
IT1        BIT TCON.2                  ; Ext. Interrupt 1 Type
IE0        BIT TCON.1                  ; Ext. Interrupt 0 Edge Flag
IT0        BIT TCON.0                  ; Ext. Interrupt 0 Type

; SCON0 0x98
OVR0       BIT SCON0.7                 ; UART0 Mode 0
PERR0      BIT SCON0.6                 ; UART0 Parity Error Flag
THRE0      BIT SCON0.5                 ; UART0 Transmit Holding Reg. Empty
REN0       BIT SCON0.4                 ; UART0 RX Enable
TBX0       BIT SCON0.3                 ; UART0 TX Bit 8
RBX0       BIT SCON0.2                 ; UART0 RX Bit 8
TI0        BIT SCON0.1                 ; UART0 TX Interrupt Flag
RI0        BIT SCON0.0                 ; UART0 RX Interrupt Flag

; SCON1 0x98
S1MODE     BIT SCON1.7                 ; UART1 Mode 0
                                       ; Bit 6 UNUSED
MCE1       BIT SCON1.5                 ; UART1 Multiprocessor enable
REN1       BIT SCON1.4                 ; UART1 RX Enable
TB81       BIT SCON1.3                 ; UART1 TX Bit 8
RB81       BIT SCON1.2                 ; UART1 RX Bit 8
TI1        BIT SCON1.1                 ; UART1 TX Interrupt Flag
RI1        BIT SCON1.0                 ; UART1 RX Interrupt Flag

; IE 0xA8
EA         BIT IE.7                    ; Global Interrupt Enable
ESPI0      BIT IE.6                    ; SPI0 Interrupt Enable
ET2        BIT IE.5                    ; Timer 2 Interrupt Enable
ES0        BIT IE.4                    ; UART0 Interrupt Enable
ET1        BIT IE.3                    ; Timer 1 Interrupt Enable
EX1        BIT IE.2                    ; External Interrupt 1 Enable
ET0        BIT IE.1                    ; Timer 0 Interrupt Enable
EX0        BIT IE.0                    ; External Interrupt 0 Enable

; IP 0xB8
                                       ; Bit 7 unused
PSPI0      BIT IP.6                    ; SPI0 Interrupt Priority
PT2        BIT IP.5                    ; Timer 2 Priority
PS0        BIT IP.4                    ; UART0 Priority
PS         BIT IP.4                    ; UART0 Priority
PT1        BIT IP.3                    ; Timer 1 Priority
PX1        BIT IP.2                    ; External Interrupt 1 Priority
PT0        BIT IP.1                    ; Timer 0 Priority
PX0        BIT IP.0                    ; External Interrupt 0 Priority

; SMB0CN 0xC0
MASTER     BIT SMB0CN.7                ; SMBus0 Master/Slave Indicator
TXMODE     BIT SMB0CN.6                ; SMBus0 Transmit Mode Indicator
STA        BIT SMB0CN.5                ; SMBus0 Start Flag
STO        BIT SMB0CN.4                ; SMBus0 Stop Flag
ACKRQ      BIT SMB0CN.3                ; SMBus0 Acknowledge Request
ARBLOST    BIT SMB0CN.2                ; SMBus0 Arbitration Lost Indicator
ACK        BIT SMB0CN.1                ; SMBus0 Acknowledge
SI         BIT SMB0CN.0                ; SMBus0 Interrupt Flag

; TMR2CN 0xC8
TF2H       BIT TMR2CN.7                ; Timer 2 High-Byte Overflow Flag
TF2L       BIT TMR2CN.6                ; Timer 2 Low-Byte  Overflow Flag
TF2LEN     BIT TMR2CN.5                ; Timer 2 Low-Byte Flag Enable
TF2CEN     BIT TMR2CN.4                ; Timer 2 Capture Enable
T2SPLIT    BIT TMR2CN.3                ; Timer 2 Split-Mode Enable
TR2        BIT TMR2CN.2                ; Timer2 Run Enable
T2RCLK     BIT TMR2CN.1                ; Timer 2 Xclk/Rclk Select
T2XCLK     BIT TMR2CN.0                ; Timer 2 Clk/8 Clock Source

; TMR4CN 0xC8
TF4        BIT TMR4CN.7                ; High Byte Overflow / Underflow Flag
EXF4       BIT TMR4CN.6                ; Low Byte Overflow Flag
                                       ; Bit 5 Unused
                                       ; Bit 4 Unused
EXE4       BIT TMR4CN.3                ; External Enable
TR4        BIT TMR4CN.2                ; Timer Run Control
CT4        BIT TMR4CN.1                ; Counter / Timer Select
CPRL4      BIT TMR4CN.0                ; Capture / Reload Select

; PSW 0xD0
CY         BIT PSW.7                   ; Carry Flag
AC         BIT PSW.6                   ; Auxiliary Carry Flag
F0         BIT PSW.5                   ; User Flag 0
RS1        BIT PSW.4                   ; Register Bank Select 1
RS0        BIT PSW.3                   ; Register Bank Select 0
OV         BIT PSW.2                   ; Overflow Flag
F1         BIT PSW.1                   ; User Flag 1
P          BIT PSW.0                   ; Accumulator Parity Flag

; PCA0CN 0xD8
CF         BIT PCA0CN.7                ; PCA0 Counter Overflow Flag
CR         BIT PCA0CN.6                ; PCA0 Counter Run Control Bit
CCF5       BIT PCA0CN.5                ; PCA0 Module 5 Interrupt Flag
CCF4       BIT PCA0CN.4                ; PCA0 Module 4 Interrupt Flag
CCF3       BIT PCA0CN.3                ; PCA0 Module 3 Interrupt Flag
CCF2       BIT PCA0CN.2                ; PCA0 Module 2 Interrupt Flag
CCF1       BIT PCA0CN.1                ; PCA0 Module 1 Interrupt Flag
CCF0       BIT PCA0CN.0                ; PCA0 Module 0 Interrupt Flag

; PCA1CN 0xD8
CF1        BIT PCA1CN.7                ; PCA1 Counter Overflow Flag
CR1        BIT PCA1CN.6                ; PCA1 Counter Run Control Bit
CCF11      BIT PCA1CN.5                ; PCA1 Module 11 Interrupt Flag
CCF10      BIT PCA1CN.4                ; PCA1 Module 10 Interrupt Flag
CCF9       BIT PCA1CN.3                ; PCA1 Module 9 Interrupt Flag
CCF8       BIT PCA1CN.2                ; PCA1 Module 8 Interrupt Flag
CCF7       BIT PCA1CN.1                ; PCA1 Module 7 Interrupt Flag
CCF6       BIT PCA1CN.0                ; PCA1 Module 6 Interrupt Flag

; ADC0CN 0xE8
AD0EN      BIT ADC0CN.7                ; ADC0 Enable
BURSTEN    BIT ADC0CN.6                ; ADC0 Burst Enable
AD0INT     BIT ADC0CN.5                ; ADC0 EOC Interrupt Flag
AD0BUSY    BIT ADC0CN.4                ; ADC0 Busy Flag
AD0WINT    BIT ADC0CN.3                ; ADC0 Window Compare Interrupt Flag
AD0LJST    BIT ADC0CN.2                ; ADC0 Left Justified
AD0CM1     BIT ADC0CN.1                ; ADC0 Start Of Conversion Mode Bit 1
AD0CM0     BIT ADC0CN.0                ; ADC0 Start Of Conversion Mode Bit 0

; SPI0CN 0xF8
SPIF       BIT SPI0CN.7                ; SPI0 Interrupt Flag
WCOL       BIT SPI0CN.6                ; SPI0 Write Collision Flag
MODF       BIT SPI0CN.5                ; SPI0 Mode Fault Flag
RXOVRN     BIT SPI0CN.4                ; SPI0 RX Overrun Flag
NSSMD1     BIT SPI0CN.3                ; SPI0 Slave Select Mode 1
NSSMD0     BIT SPI0CN.2                ; SPI0 Slave Select Mode 0
TXBMT      BIT SPI0CN.1                ; SPI0 TX Buffer Empty Flag
SPIEN      BIT SPI0CN.0                ; SPI0 Enable


;------------------------------------------------------------------------------
; LIN0 Indirect Registers
;------------------------------------------------------------------------------
LIN0DT1                 EQU 0x00       ; LIN0 Data Byte 1
LIN0DT2                 EQU 0x01       ; LIN0 Data Byte 2
LIN0DT3                 EQU 0x02       ; LIN0 Data Byte 3
LIN0DT4                 EQU 0x03       ; LIN0 Data Byte 4
LIN0DT5                 EQU 0x04       ; LIN0 Data Byte 5
LIN0DT6                 EQU 0x05       ; LIN0 Data Byte 6
LIN0DT7                 EQU 0x06       ; LIN0 Data Byte 7
LIN0DT8                 EQU 0x07       ; LIN0 Data Byte 8
LIN0CTRL                EQU 0x08       ; LIN0 Control
LIN0ST                  EQU 0x09       ; LIN0 Status
LIN0ERR                 EQU 0x0A       ; LIN0 Error
LIN0SIZE                EQU 0x0B       ; LIN0 Message Size
LIN0DIV                 EQU 0x0C       ; LIN0 Divider
LIN0MUL                 EQU 0x0D       ; LIN0 Multiplier
LIN0ID                  EQU 0x0E       ; LIN0 Identifier


;------------------------------------------------------------------------------
; Interrupt Priorities
;------------------------------------------------------------------------------
INTERRUPT_INT0          EQU  0         ; External Interrupt 0
INTERRUPT_TIMER0        EQU  1         ; Timer 0 Overflow
INTERRUPT_INT1          EQU  2         ; External Interrupt 1
INTERRUPT_TIMER1        EQU  3         ; Timer 1 Overflow
INTERRUPT_UART0         EQU  4         ; UART0
INTERRUPT_TIMER2        EQU  5         ; Timer 2 Overflow
INTERRUPT_SPI0          EQU  6         ; SPI0
INTERRUPT_SMBUS0        EQU  7         ; SMBus0 Interface
INTERRUPT_ADC0_WINDOW   EQU  8         ; ADC0 Window Comparison
INTERRUPT_ADC0_EOC      EQU  9         ; ADC0 End Of Conversion
INTERRUPT_PCA0          EQU 10         ; PCA0 Peripheral
INTERRUPT_COMPARATOR0   EQU 11         ; Comparator 0 Comparison
INTERRUPT_COMPARATOR1   EQU 12         ; Comparator 1 Comparison
INTERRUPT_TIMER3        EQU 13         ; Timer 3 Overflow
INTERRUPT_LIN0          EQU 14         ; LIN Bus Interrupt
INTERRUPT_VREG          EQU 15         ; Voltage Regulator
INTERRUPT_CAN0          EQU 16         ; CAN Bus Interrupt
INTERRUPT_PORT_MATCH    EQU 17         ; Port Match
INTERRUPT_UART1         EQU 18         ; UART1
INTERRUPT_PCA1          EQU 19         ; PCA1 Peripheral
INTERRUPT_COMPARATOR2   EQU 20         ; Comparator 2 Comparison
INTERRUPT_TIMER4        EQU 21         ; Timer 4 Overflow / Underflow
INTERRUPT_TIMER5        EQU 22         ; Timer 5 Overflow / Underflow

;------------------------------------------------------------------------------
; SFR Page Definitions
;------------------------------------------------------------------------------
CONFIG_PAGE             EQU 0x0F       ; System and Port Configuration Page
ACTIVE_PAGE             EQU 0x00       ; Active Use Page
ACTIVE2_PAGE            EQU 0x10       ; Active Use Page 2
CAN0_PAGE               EQU 0x0C       ; CAN0 Registers


$RESTORE