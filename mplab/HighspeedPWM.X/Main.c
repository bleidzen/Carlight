#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

#ifndef _XTAL_FREQ
#define _XTAL_FREQ  16000000
#endif


// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection Bits (Internal Oscillator, I/O function on OSC1)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = ON    // Clock Out Enable (CLKOUT function is enabled on the CLKOUT pin)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)




void main(int argc, char** argv) {
    int i = 2;
    TRISA = 0b00000000;
    TRISC = 0b00000000;
    __delay_ms(10);
    OSCCONbits.IRCF = 0b1111;			// Tosc=16MHz
    while(1){
      int i = 2;
   int i = 2;

   while(i>1) {
      
        LATAbits.LATA2 = 1;
        LATAbits.LATA2 = 1;
        LATAbits.LATA2 = 0;
        LATAbits.LATA2 = 0;
        LATAbits.LATA2 = 0;
        LATAbits.LATA2 = 1;
        i++;
//hadde 44%
 }
    }
}