#include <stdint.h>
// maybe need to add some more libraries

//Defines
#define GPIOA_BASE 0x48000000


typedef struct {
    volatile uint32_t MODER; // offset 0x00
    volatile uint32_t OTYPER; // offeset 0x04
    volatile uint32_t OSPEEDR; // offeset 0x08
    volatile uint32_t PUPDR; // offeset 0x0C
    volatile uint32_t IDR; // offeset 0x10
    volatile uint32_t ODR; // offeset 0x14
    volatile uint32_t BSRR; // offeset 0x18
    volatile uint32_t LCKR; // offeset 0x1C
    volatile uint32_t AFRL; // offeset 0x20
    volatile uint32_t AFRH; // offeset 0x24
    volatile uint32_t BRR; // offeset 0x28

} GPIO_types;
// how do I start the GPIO pins at the right value? 
// what is segger and do i need to use it?