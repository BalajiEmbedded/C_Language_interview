#include<stdio.h>

enum trafic {red,green,orange};

void main()
{
    enum trafic e1 =5;

    switch(e1)
    {
        case green:
                printf("go\n");
                break;
        case red:
            printf("stop\n");
            break;
        case orange:
            printf("stop and go\n");
            break;

        default:
                printf("enter valid choice\n");
    }
}