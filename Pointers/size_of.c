#include <stdio.h>
#include <stddef.h>

int size_of(void *obj, size_t bytes)
{
    char *start = (char *)obj;
    char *end = start + bytes;

    return (int)(end - start);
}

int main(void)
{
    int a;
    char ch;
    float f;
    long l;
    double d;

    printf("int    : %zu bytes\n", size_of(&a, 4));
    printf("char   : %zu bytes\n", size_of(&ch, 1));
    printf("float  : %zu bytes\n", size_of(&f, 4));
    printf("long   : %zu bytes\n", size_of(&l, 8));
    printf("double : %zu bytes\n", size_of(&d, 8));

    return 0;
}