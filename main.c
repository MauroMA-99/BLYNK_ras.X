/*
 * File:   main.c
 * Author: MauroMA
 *
 * Created on 3 de abril de 2022, 11:18
 */

/*Cabecera del programa*/
#include <xc.h>
#include "config.h" /*Cabecera con la configuracion de fuses*/
#define _XTAL_FREQ 8000000 /*Definicion del oscilador del CPU*/
#include <stdint.h>  /*Libreria par alos enteros no estandar*/

/*Variables globales*/

/*Declaracion de funciones*/

/*Funcion principal*/
void main(void) {
    OSCCON=0x72; /*Configura Oscilador interno a 8 MHz*/
    TRISB &=~(1<<0); /*Configura RB0 como salida*/
    // 0 -> Salida
    // 1 -> Entrada
    
    while (1){
        LATB |= (1<<0); /*Encendemos Led en RB0*/
        __delay_ms(500); /*Esperamos 500 ms*/
        LATB &=~ (1<<0); /*Encendemos Led en RB0*/
        __delay_ms(500); /*Esperamos 500 ms*/
    }
    
    return;
}



