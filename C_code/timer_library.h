// timer_library.h
// structure for timers 6 & 7
#ifndef STM32L4_timer_H
#define STM32L4_timer_H

#include <stdint.h>

//////// Definitions
#define __IO volatile

// Base address
#define TIM6_BASE (0x40001000UL) // base address of TIM6 -- HOW TO DO TIM7? 


// Timer 6 & 7 register struct
typedef struct {
    __IO uint32_t CR1;   // Offset 0x00 
    __IO uint32_t CR2;  // Offset 0x04
    __IO uint32_t DIER; // GPIO Offset 0x08
    __IO uint32_t SR;  // GPIO Offset 0x0C
    __IO uint32_t EGR;     // GPIO Offset 0x10
    __IO uint32_t CNT;     // GPIO Offset 0x14
    __IO uint32_t PSC;    // GPIO Offset 0x18
    __IO uint32_t ARR;    // GPIO Offset 0x1C
} TIMx_typeDef;

#define TIMx ((TIMx_typeDef *) TIM6_BASE)

//////// Function prototypes
void configureTimer6(void); 

#endif