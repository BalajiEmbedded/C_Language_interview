#include<stdio.h>

int size_of(void *obj)
{

    return ((char*)(obj +1)) - (char*)(obj);

}

void main()
{
    int a;
    char ch;
    float f;
    long l;
    double d;
    printf("%d\n",size_of(&a));
    printf("%d\n",size_of(&ch));
    printf("%d\n",size_of(&f));
    printf("%d\n",size_of(&l));
    printf("%d\n",size_of(&d));


}