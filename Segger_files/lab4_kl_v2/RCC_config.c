#include "RCC_config.h"

void configureClock(){
    // enable MSI to go to sysCLK
    RCC->CR &= (1);
    RCC->AHB1ENR &= (0b11<<5);   // enable clk7 and clk6
  
}