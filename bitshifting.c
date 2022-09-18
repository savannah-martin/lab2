#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int bsMultiply(unsigned int number, unsigned int powerOfTwo)
{
    int count = 0;
    unsigned int fin = 0;
    if (powerOfTwo % 2 == 1)
    {
        return 0;
    }
    while (powerOfTwo != 0 && powerOfTwo % 2 == 0)
    {
        powerOfTwo >>= 1;
        count++;
    }
    printf("Count: %i\n", count);

    if ((number << count) <= USHRT_MAX) // or UINT_MAX here if long unsigned int
    {
        printf("Max 32-in value: %u\n", USHRT_MAX);
        printf("Difference: %u\n", USHRT_MAX - (number << count));
        return number << count;
    }
    else
    {
        return 0;
    }
}
int main()
{
    unsigned int num = 0;
    unsigned int expo = 0;
    printf("Enter Number: ");
    scanf("%u", &num);
    printf("Value: %u\n", num);

    printf("Enter Power of Two: ");
    scanf("%u", &expo);
    printf("Value: %u\n", expo);
    printf("Shifted: %u\n", bsMultiply(num, expo));
}