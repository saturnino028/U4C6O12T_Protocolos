/**
 * @brief cabeçalho das funções de controle de gpio e outras 
 */
#ifndef GPIO_BOOT_H
#define GPIO_BOOT_H

/********************* Includes *********************/
#include <stdlib.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"

/********************* Defines *********************/

#define bot_A   5 //Botao A
#define bot_B   6 //Botao B

#define LED_G   11 //Led Verde
#define LED_B   12 //Led azul
#define LED_R   13 //Led vermelho

#define NUM_PIXELS 25 //Número de pixels/leds matriz

/********************* Variaveis Globais *********************/

extern uint8_t botoes_flag;
extern bool status_led_G;
extern bool status_led_B;

/********************* Prototipo de Funções *********************/

void init_pins_gpio();
void entrar_modo_gravacao();
void botoes_callback(uint gpio, uint32_t events);


#endif //GPIO_BOOT.H