// timer7_config.c
#include "timer7_config.h"

// configure the timer 
volatile uint32_t configureTimer7(int time) {
  // actually turn timer on 
  TIM7->CR1 &= (1);     // no shifting over needed for this one 
  
  volatile uint32_t count = TIM7->CNT;  // set count = to the counter of timer7

  // returns one when we hit time, otherwise 0 
  if (count >= time) {
    return 1;
    TIM7->CNT &= (0);   // reset count to zero 
    } 
  else {
    return 0; 
  } 
    
}