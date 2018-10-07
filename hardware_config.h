/* 
 * File:   hardware_config.h
 * Author: luke
 *
 * Created on 3. Oktober 2018, 17:19
 */

#ifndef HARDWARE_CONFIG_H
#define	HARDWARE_CONFIG_H

/*
 * Define your board revision here
 */

#define BOARD_REVISION_F

/******************************************************************************
 * Nothing should need to be changed below here                               *
 ******************************************************************************/

/*
 * Replacement for some depreciated PLIB macros
 */

#define  PPSUnLock()    {EECON2 = 0b01010101; EECON2 = 0b10101010; PPSCONbits.IOLOCK = 0;}
#define  PPSLock() 		{EECON2 = 0b01010101; EECON2 = 0b10101010; PPSCONbits.IOLOCK = 1;}

/*
 * General definitions for setting pin functions
 */

#define PIN_INPUT           1
#define PIN_OUTPUT          0
#define PIN_DIGITAL         1
#define PIN_ANALOG          0

/*
 * Physical properties, pinout
 */

#define _XTAL_FREQ 8000000

#define PPS_FUNCTION_SPI2_DATA_OUTPUT_VALUE 10
#define PPS_FUNCTION_SPI2_DATA_INPUT_REGISTER RPINR21
#define PPS_FUNCTION_SPI2_CLOCK_OUTPUT_VALUE 11
#define PPS_FUNCTION_SPI2_CLOCK_INPUT_REGISTER RPINR22
#define PPS_FUNCTION_SPI2_CHIPSELECT_OUTPUT_VALUE 12
#define PPS_FUNCTION_SPI2_CHIPSELECT_INPUT_REGISTER RPINR23
#define PPS_FUNCTION_CCP1_A_OUTPUT_VALUE 14
#define PPS_FUNCTION_CCP1_B_OUTPUT_VALUE 15

#define DISP_EN_TRIS TRISDbits.TRISD0
#define DISP_EN_PIN LATDbits.LD0

#define VCC_HIGH_TRIS TRISCbits.TRISC2
#define VCC_HIGH_PIN LATCbits.LC2

#define BUCK_ENABLE_TRIS TRISBbits.TRISB1
#define BUCK_ENABLE_PIN LATBbits.LB1
#define BUCK_LOWFET_TRIS TRISBbits.TRISB2
#define BUCK_LOWFET_PIN LATBbits.LB2
#define BUCK_LOWFET_RP_OUTPUT_REGISTER RPOR6
#define BUCK_HIGHFET_TRIS TRISBbits.TRISB3
#define BUCK_HIGHFET_PIN LATBbits.LB3
#define BUCK_HIGHFET_RP_OUTPUT_REGISTER RPOR5

#define PWROUT_ENABLE_TRIS TRISCbits.TRISC7
#define PWROUT_ENABLE_PIN LATCbits.LC7
#define PWROUT_CH1_TRIS TRISEbits.TRISE2
#define PWROUT_CH1_PIN LATEbits.LE2
#define PWROUT_CH2_TRIS TRISEbits.TRISE1
#define PWROUT_CH2_PIN LATEbits.LE1
#define PWROUT_CH3_TRIS TRISEbits.TRISE0
#define PWROUT_CH3_PIN LATEbits.LE0
#define PWROUT_CH4_TRIS TRISAbits.TRISA5
#define PWROUT_CH4_PIN LATAbits.LA5

#define USBCHARGER_EN_TRIS TRISDbits.TRISD3
#define USBCHARGER_EN_PIN LATDbits.LD3

#define SPI_MISO_TRIS TRISDbits.TRISD6
#define SPI_MISO_PIN LATDbits.LD6
#define SPI_MISO_RP_INPUT_VALUE 23
#define SPI_MISO_RP_OUTPUT_REGISTER RPOR23
#define SPI_MOSI_TRIS TRISDbits.TRISD4
#define SPI_MOSI_PIN LATDbits.LD4
#define SPI_MOSI_RP_INPUT_VALUE 21
#define SPI_MOSI_RP_OUTPUT_REGISTER RPOR21

#define SPI_SCLK_TRIS TRISDbits.TRISD5
#define SPI_SCLK_PIN LATDbits.LD5
#define SPI_SCLK_RP_INPUT_VALUE 22
#define SPI_SCLK_RP_OUTPUT_REGISTER RPOR22

#define SPI_SS1_TRIS TRISDbits.TRISD7
#define SPI_SS1_PIN LATDbits.LD7
#define SPI_SS1_RP_INPUT_VALUE 24
#define SPI_SS1_RP_OUTPUT_REGISTER RPOR24



#ifdef BOARD_REVISION_E
    #define SPI_SS2_TRIS TRISDbits.TRISD1
    #define SPI_SS2_PIN LATDbits.LD1
    #define SPI_SS2_RP_INPUT_VALUE NOT_AVAILABLE
    #define SPI_SS2_RP_OUTPUT_REGISTER NOT_AVAILABLE
    #define FANOUT_TRIS TRISDbits.TRISD2
    #define FANOUT_PIN LATDbits.LD2
#endif /* BOARD_REVISION_E */

#ifdef BOARD_REVISION_F
    #define SPI_SS2_TRIS TRISDbits.TRISD2
    //#define SPI_SS2_PIN LATDbits.LD2
    #define SPI_SS2_PORT PORTDbits.RD2
    #define SPI_SS2_LAT LATDbits.LD2
    #define SPI_SS2_RP_INPUT_VALUE 19
    #define SPI_SS2_RP_OUTPUT_REGISTER RPOR19
    #define FANOUT_TRIS TRISDbits.TRISD1
    #define FANOUT_PIN LATDbits.LD1
#endif /* BOARD_REVISION_F */

#define PUSHBUTTON_TRIS TRISAbits.TRISA0
#define PUSHBUTTON_PIN PORTAbits.RA0
#define PUSHBUTTON_LAT LATAbits.LA0
#define PUSHBUTTON_ANCON ANCON0bits.PCFG0
#define PUSHBUTTON_PPS 0
#define ENCODER_A_TRIS TRISBbits.TRISB7
#define ENCODER_A_PIN PORTBbits.RB7
#define ENCODER_A_PPS 9
#define ENCODER_B_TRIS TRISBbits.TRISB6
#define ENCODER_B_PIN PORTBbits.RB6
#define ENCODER_B_PPS 10

#define VOLTAGE_REFERENCE_TRIS TRISAbits.TRISA3
#define VOLTAGE_REFERENCE_ANCON ANCON0bits.PCFG3
#define TEMPERATURE1_TRIS TRISBbits.TRISB0
#define TEMPERATURE1_ANCON ANCON1bits.PCFG12
#define TEMPERATURE1_CHANNEL 0b1100
#define TEMPERATURE2_TRIS TRISAbits.TRISA1
#define TEMPERATURE2_ANCON ANCON0bits.PCFG1
#define TEMPERATURE2_CHANNEL 0b0001
#define TEMPERATURE3_TRIS TRISAbits.TRISA2
#define TEMPERATURE3_ANCON ANCON0bits.PCFG2
#define TEMPERATURE3_CHANNEL 0b0010

#endif	/* HARDWARE_CONFIG_H */

