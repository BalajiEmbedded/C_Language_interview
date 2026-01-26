// A NULL pointer points to nothing.
// Dereferencing NULL → crash (segmentation fault).
// Always initialize unassigned pointers to NULL.
// Use NULL for checking conditions, especially with dynamic memory and linked data structures.


#include<stdio.h>

void main()
{
    int *ptr;
    ptr=NULL;
    printf("%p",ptr);
    printf("%d",*ptr); //Dereferencing a NULL pointer is undefined behavior → program crashes.
}