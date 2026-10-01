// timer6_freq.c
#include "timer6_config.h"

// configure timer 6 to go back and forth when TIM6 = max value
void configureTimer6(void) { 
    TIM6->PSC |= (0b11);  // ck_cnt = f_ck_psc/(psc +1), so to divide by 4, we put 3 into this
    TIM6->EGR |= (1); 
    TIM6->CNT &= (0);   // set count = to 0 to start.
    // wait for update to register to turn on
    //while ((TIM6->SR & 1));
    // actually turn timer on 
    TIM6->CR1 |= (0b1); // no shifting over needed for this one
}

volatile uint32_t runTim6(int freq) {
    //volatile uint32_t count = TIM6->CNT;  // set count = to the counter of timer6
    
    int max = 0;
    // making sure that we don't divide by 0 
    if (freq > 0) {
      max = 1000000/freq; // max count number 
      }
    else {
      max = 0;}
    
    while((TIM6->CNT) <= max);

    // after exiting the while loop 
    TIM6->CNT &= (0);   // reset count back to zero
    return 1;
}

