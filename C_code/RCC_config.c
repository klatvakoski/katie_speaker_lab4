#include <RCC_config.h>

void configureClock(){
    // enable MSI to go to sysCLK
    RCC->CR &= (1);  // --- might need to use RCC_CFGR

}