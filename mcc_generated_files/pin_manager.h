/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18875
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set analogico0 aliases
#define analogico0_TRIS                 TRISAbits.TRISA0
#define analogico0_LAT                  LATAbits.LATA0
#define analogico0_PORT                 PORTAbits.RA0
#define analogico0_WPU                  WPUAbits.WPUA0
#define analogico0_OD                   ODCONAbits.ODCA0
#define analogico0_ANS                  ANSELAbits.ANSA0
#define analogico0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define analogico0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define analogico0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define analogico0_GetValue()           PORTAbits.RA0
#define analogico0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define analogico0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define analogico0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define analogico0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define analogico0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define analogico0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define analogico0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define analogico0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set led0 aliases
#define led0_TRIS                 TRISAbits.TRISA4
#define led0_LAT                  LATAbits.LATA4
#define led0_PORT                 PORTAbits.RA4
#define led0_WPU                  WPUAbits.WPUA4
#define led0_OD                   ODCONAbits.ODCA4
#define led0_ANS                  ANSELAbits.ANSA4
#define led0_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define led0_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define led0_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define led0_GetValue()           PORTAbits.RA4
#define led0_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define led0_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define led0_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define led0_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define led0_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define led0_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define led0_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define led0_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set led1 aliases
#define led1_TRIS                 TRISAbits.TRISA5
#define led1_LAT                  LATAbits.LATA5
#define led1_PORT                 PORTAbits.RA5
#define led1_WPU                  WPUAbits.WPUA5
#define led1_OD                   ODCONAbits.ODCA5
#define led1_ANS                  ANSELAbits.ANSA5
#define led1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define led1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define led1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define led1_GetValue()           PORTAbits.RA5
#define led1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define led1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define led1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define led1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define led1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define led1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define led1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define led1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set led2 aliases
#define led2_TRIS                 TRISAbits.TRISA6
#define led2_LAT                  LATAbits.LATA6
#define led2_PORT                 PORTAbits.RA6
#define led2_WPU                  WPUAbits.WPUA6
#define led2_OD                   ODCONAbits.ODCA6
#define led2_ANS                  ANSELAbits.ANSA6
#define led2_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define led2_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define led2_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define led2_GetValue()           PORTAbits.RA6
#define led2_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define led2_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define led2_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define led2_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define led2_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define led2_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define led2_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define led2_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set led3 aliases
#define led3_TRIS                 TRISAbits.TRISA7
#define led3_LAT                  LATAbits.LATA7
#define led3_PORT                 PORTAbits.RA7
#define led3_WPU                  WPUAbits.WPUA7
#define led3_OD                   ODCONAbits.ODCA7
#define led3_ANS                  ANSELAbits.ANSA7
#define led3_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define led3_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define led3_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define led3_GetValue()           PORTAbits.RA7
#define led3_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define led3_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define led3_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define led3_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define led3_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define led3_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define led3_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define led3_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/