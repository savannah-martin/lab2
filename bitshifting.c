#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    fin = number << count;
    if (fin >= 2147483647)
    {
        return 0;
    }
    else
        return fin;
}
int main()
{
    unsigned int num = 0;
    unsigned int expo = 0;
    printf("Enter Number: ");
    scanf("%i", &num);
    printf("Value: %i\n", num);

    printf("Enter Power of Two: ");
    scanf("%i", &expo);
    printf("Value: %i\n", expo);
    printf("Shifted: %i\n", bsMultiply(num, expo));
}