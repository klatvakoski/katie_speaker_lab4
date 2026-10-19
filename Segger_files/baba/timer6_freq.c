// timer6_freq.c
#include "timer6_config.h"

// configure timer 6 to go back and forth when TIM6 = max value
volatile uint32_t configureTimer6(int freq) {
    // actually turn timer on 
    TIM6->CR1 &= (1); // no shifting over needed for this one 
    TIM6->PSC &= (0b11);  // ck_cnt = f_ck_psc/(psc +1), so to divide by 4, we put 3 into this

    volatile uint32_t count = TIM6->CNT;  // set count = to the counter of timer6
    int max = 1000000/freq; // max count number 

    if (count >= max) {
      return 1; 
      TIM6->CNT &= (0);   // reset count back to zero
      }
    else {
      return 0;
      }

}

