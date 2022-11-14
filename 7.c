#include <stdio.h>

int is_prime(int n);

int main()
{
    int prime_count = 0;
    int i = 1;
    while (1)
    {
        if (is_prime(i))
        {
            prime_count++;
        }
        if (prime_count == 10001)
            break;

        i += 1;
    }

    printf("The 10001st prime number is: %d\n", i);
    return 0;
}
int is_prime(int n)
{
    if (n <= 1)
        return 0;

    for (int factor = 2; factor < n; factor++)
    {
        if (n % factor == 0)
            return 0;
    }
    return 1;
}