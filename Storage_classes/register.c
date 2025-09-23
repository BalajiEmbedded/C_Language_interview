#include <stdio.h>

int main() {
    register int i;  // request compiler to keep in CPU register
    for (i = 0; i < 5; i++) 
    {
        printf("%d\n", i);
    }
    return 0;
}
