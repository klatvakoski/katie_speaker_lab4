// timer7_config.c
#include "timer7_config.h"

// configure the timer 
volatile uint32_t configureTimer7(int time) {
  // actually turn timer on 
  TIM7->CR1 |= (1);     // no shifting over needed for this one 
  TIM7->CNT &= 0;       // set the intial counter to 0 
  volatile uint32_t count = TIM7->CNT;  // set count = to the counter of timer7
  
  // we want 1000/sec and we have 4,000,000/sec so divide by 4000
  // returns one when we hit time, otherwise 0 
  while (count/4000 <= time);
  
  // once we finish count then reset to zero
  TIM7->CNT &= (0);   // reset count to zero 
  return 1; 
    
}