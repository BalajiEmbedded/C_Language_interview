#include <stdio.h>

#define my_sizeof(var) ((char *)(&(var) + 1) - (char *)(&(var)))

struct Point {
    int x;
    double y;
};

int main() {
    int i;
    double d;
    int arr[10];
    struct Point p;

    printf("Size of int: %ld bytes\n", my_sizeof(i));
    printf("Size of double: %ld bytes\n", my_sizeof(d));
    printf("Size of int array[10]: %ld bytes\n", my_sizeof(arr));
    printf("Size of struct Point: %ld bytes\n", my_sizeof(p));

    return 0;
}
