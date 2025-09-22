//Default storage class for local variables.
//Scope: Local to the block (function).
//Lifetime: Exists only during function execution.
//Initialization: Not automatically initialized (contains garbage if not assigned).
//Optional keyword: You can write auto int x = 5;, but just int x = 5; is the same.
//Automatic cleanup: When the function ends, the stack memory is automatically freed.

#include <stdio.h>

int main() 
{
    auto int a = 10;   // auto is optional
    printf("%d\n", a);
    return 0;
}

//a exists only inside main().
//Once main() ends, a is destroyed.