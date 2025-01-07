#include <stdio.h>

//32- bit control register
typedef struct ControlRegister
{
    unsigned int enableDevice: 1;
    unsigned int resetDevice: 1;
    unsigned int interruptEnable: 1;
    unsigned int modeSelect: 2;
    unsigned int reserved: 27;
}ControlRegister; 

int main()
{

    //Declare a control register
    ControlRegister controlReg = {0};

    //Enable the device
    controlReg.enableDevice = 1;

    //select operating mode 3
    controlReg.modeSelect = 3;
    
    //The size of ControlRegister should be 4 bytes (32bits)
    printf("Size of Control Register is: %lu bytes\n", sizeof(ControlRegister));

    return 0;
}