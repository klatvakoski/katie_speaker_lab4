// timer6_freq.c
#include "timer6_config.h"

// configure the timer 
void configureTimer6() {
    // actually turn timer on 
    TIM6->CR1 &= (1); // no shifting over needed for this one 
    
}

