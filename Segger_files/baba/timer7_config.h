// timer7_config.h
// structure for timer 7
#ifndef STM32L4_timer7_H
#define STM32L4_timer7_H

#include <stdint.h>

//////// Definitions
#define __IO volatile

// Base address
#define TIM7_BASE (0x40001400UL) // base address of TIM7 


// Timer 6 & 7 register struct
typedef struct {
    __IO uint32_t CR1;   // Offset 0x00 
    __IO uint32_t CR2;  // Offset 0x04
    uint32_t      RESERVED1;   // Reserved, offset 0x08
    __IO uint32_t DIER; // GPIO Offset 0x0C
    __IO uint32_t SR;  // GPIO Offset 0x10
    __IO uint32_t EGR;     // GPIO Offset 0x14
    uint32_t      RESERVED2;   //Reserved, offset 0x18
    uint32_t      RESERVED3;   //Reserved, offset 0x1C
    uint32_t      RESERVED4;   //Reserved, offset 0x20
    __IO uint32_t CNT;     // GPIO offset 0x24
    __IO uint32_t PSC;    // GPIO Offset 0x28
    __IO uint32_t ARR;    // GPIO Offset 0x2C
} TIM7_typeDef;

#define TIM7 ((TIM7_typeDef *) TIM7_BASE)

//////// Function prototypes
void configureTimer7(void); 
volatile uint32_t tim7_done(int time);

#endif
