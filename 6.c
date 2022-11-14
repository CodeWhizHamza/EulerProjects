/**
 * difference between sum of squares of first 100 natural numbers
 * and their sqaure of sum.
 */

#include <stdio.h>

int main()
{
    int sum_of_squares = 0;
    int sum = 0;
    int difference;

    for (int i = 1; i <= 100; i++)
    {
        sum_of_squares += i * i;
        sum += i;
    }

    difference = (sum * sum) - sum_of_squares;
    printf("Difference: %d\n", difference);

    return 0;
}