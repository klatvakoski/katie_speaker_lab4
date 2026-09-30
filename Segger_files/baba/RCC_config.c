#include "RCC_config.h"

void configureClock(void){
    // enable MSI to go to sysCLK
    RCC->CR |= (1);
    RCC->APB1ENR1 |= (0b11<<4);   // enable clk7 and clk6 
  
}