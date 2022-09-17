//mathematical idea from
//https://www.learncpp.com/cpp-tutorial/relational-operators-and-floating-point-comparisons/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 100.0 - 99.99; // should equal .01
    float y = 10.0 - 9.99;   // also should equal .01
    float z = 0.01;

    if (x == y == z)
    {
        printf("These are equal.");
    }
    else
    {
        printf("These are not equal.");
        return 0;
    }
}