// note_and_wait.c

#include "stdio.h"
#include 'timer6_config.h'
#include 'timer7_config.h'
#include 'gpio_config.h'

void note_and_wait(int freq, int time) {
  // call timers 
  volatile uint32_t oscillator = configureTimer6(freq);
  volatile uint32_t time_done = configureTimer7(time); 
  
  while (time_done == 0) {
    // drive oscillator directly onto an output pin
    if (oscillator == 1) {
      togglePin(5);   // toggle pin 5 to oscillate the music
      }
    }
  // once time_done = 1, we stop
  
  
  
  } 
