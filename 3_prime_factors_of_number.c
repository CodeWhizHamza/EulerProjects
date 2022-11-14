/*

Currently I'm unable to figure out how to find this.
But after a cup of tea, I'll be able....

Let's have a cup of ☕

*/

#include <stdio.h>

int is_prime(int n);

int main()
{
    long long int number = 600851475143;
    int factor = 1;
    for (int i = 2; 1; i++)
    {
        if (number == 1)
            break;
        if (number % i == 0)
        {
            factor = i;
            number /= factor;
        }
    }
    printf("Largest prime factor: %d\n", factor);

    return 0;
}
int is_prime(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    for (int factor = 2; factor < n; factor++)
    {
        if (n % factor == 0)
            return 0;
    }
    return 1;
}