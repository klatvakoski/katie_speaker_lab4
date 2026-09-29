#include "RCC_config.h"

void configureClock(){
    // enable MSI to go to sysCLK
    RCC->CR &= (1);
    RCC->APB1ENR1 &= (0b11<<5);   // enable clk7 and clk6 -- possibly not working (neither bit in APB1ENR1 turns on)
  
}