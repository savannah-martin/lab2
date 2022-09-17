#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0.000001;
    float y = 4.999999;
    float z = 6.888888;

    


    // c + (a + b) ≠ (c + a) + b
    if (x + (y + z) == (x + y) + z)
    {
        printf("These are associative.");
    }
    else
    {
        printf("These are not associative.");
        return 0;
    }
}