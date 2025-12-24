#include<stdio.h>
#include<stdlib.h>


volatile uint8_t rx_done = 0;

void USART_ISR(void)
{
    rx_done = 1;
}

int main(void)
{
    while(rx_done == 0);  // waits correctly
}

//ISR changes rx_done
//Without volatile, compiler may make infinite loop
//“I used volatile for flags shared between ISR and main loop.”

//“All memory-mapped I/O registers were declared volatile.”