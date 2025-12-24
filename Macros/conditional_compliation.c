//Used in embedded, kernel, driver development.
//If DEBUG is 0 or undefined, debug code is removed at compile time.
//This is widely used in Linux kernel, firmware, U-Boot, etc.

#include<stdio.h>

#define DEBUG 1

void main()
{
    #if DEBUG
            printf("iam in debug mode\n");

    #endif
            printf("iam not in debugging mode\n");
    

}