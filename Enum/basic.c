//enum (Enumeration) enum is a user-defined type consisting of a set of named integer constants.
//By default:First name = 0 Next names increment by +1 You can also manually assign values. 
//Improves code readability by replacing numbers with meaningful names.

#include<stdio.h>

enum days {sunday,monday,tuesday,wednesday,thursday,friday,saturday};

void main()
{

    enum days today=wednesday;
    printf("%d\n",today);

}