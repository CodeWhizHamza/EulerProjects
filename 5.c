// Smallest number that is divisible by all 1 to 20 numbers

#include <stdio.h>

int is_divisible_by_all_20(int n);

int main()
{
    int i = 2;
    while (1)
    {
        if (is_divisible_by_all_20(i))
        {
            printf("%d is divisible by all numbers from 1 to 20.\n", i);
            break;
        }
        i += 1;
    }
    return 0;
}

int is_divisible_by_all_20(int n)
{
    int is_divisible = 1;
    for (int i = 1; i <= 20; i++)
    {
        if (n % i != 0)
        {
            is_divisible = 0;
            break;
        }
    }
    return is_divisible;
}