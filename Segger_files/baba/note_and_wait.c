// note_and_wait.c

#include "stdio.h"
#include "timer6_config.h"
#include "timer7_config.h"
#include "gpio_config.h"
#include "note_and_wait.h"



void note_and_wait(int freq, int time) {
  // configure timers 
  configureTimer6();
  configureTimer7(); 
  volatile uint32_t oscillator = 0; 

  while (!(tim7_done(time))) {
    // drive oscillator directly onto an output pin
    oscillator = runTim6(freq);
    if (oscillator == 1) {
      togglePin(PIN);   // toggle pin 5 to oscillate the music
      }
    }


  // once time_done = 1, we stop
  
  
  
  } 


  //configtim7();

  //while(!is_tim7_done(time){
  //  togglePin with tim6
  //}

  //note++;