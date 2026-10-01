// timer7_config.c
#include "timer7_config.h"

// configure the timer 
void configureTimer7(void) {
  TIM7->PSC |= (0b11000111 << 0);  // ck_cnt = f_ck_psc/(psc +1), so to divide by 200, we put 199 into this
  TIM7->EGR |= 1;
  TIM7->CNT &= 0;       // set the intial counter to 0 
  // turn on EGR so that PSC changes:
  TIM7->CR1 |= (0b1);     // turn counter on; no shifting over needed for this one
  }
 
volatile uint32_t tim7_done(int time) {
  // we want 1000/sec and we have 20,000/sec so divide by 20
  // returns one when we hit time, otherwise 0 
  if ((TIM7->CNT)/20 > time){
    //reset timer
    TIM7->CR1 &= 0b0;  // turn timer off
    TIM7->EGR |= 1;   // reset the counter
    return 1;
    }
  else {
    return 0;
  }
}


/*
volatile uint32_t configureTimer7(int time) {
  TIM7->PSC |= (0b11000111 << 0);  // ck_cnt = f_ck_psc/(psc +1), so to divide by 200, we put 199 into this
  TIM7->EGR |= 1;
  TIM7->CNT &= 0;       // set the intial counter to 0 
  // turn on EGR so that PSC changes:
  TIM7->CR1 |= (0b1);     // turn counter on; no shifting over needed for this one
 }



uint32_t is_tim7_done(int time){
  if (TIM7->CNT > time){
    //reset timer
    TIM7->CR1 &= 0b0;
    TIM7->EGR |= 1;
    return 1;
    }
  else
    return 0
} */