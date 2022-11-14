#include <stdio.h>

int main()
{
    int sum = 0, i = 1;

    while (i < 1000)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
        i += 1;
    }
    printf("The sum of all multiples of 3 and 5 from 1 to 1000 is %d\n", sum);

    return 0;
}