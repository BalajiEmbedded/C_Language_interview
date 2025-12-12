//Used in embedded, kernel, driver development.

#include<stdio.h>

#define DEBUG 1

void main()
{
    #if DEBUG
            printf("iam in debug mode\n");

    #endif
            printf("iam not in debugging mode\n");
    

}