#include <stdio.h>
#include <stdlib.h>

int powerOfTwo(unsigned int number, unsigned int powerOfTwo)
{
    int count = 0;

    if (powerOfTwo % 2 == 1)
    {
        printf("0");
        return 0;
    }
    while (powerOfTwo != 0 && powerOfTwo % 2 == 0)
    {
        powerOfTwo >>= 1;
        count++;
    }
    printf("%d", number << count);
    return number << count;
}
int main()
{
    int expo = 0;
    int num = 0;
    printf("Enter an unsigned int value: ");
    scanf("%u", &expo);
    printf("value: %u\n", expo);

    printf("Enter an unsigned int value again: ");
    scanf("%u", &num);
    printf("value: %u\n", num);
    printf("Shifted: %u\n", powerOfTwo(num, expo));
}