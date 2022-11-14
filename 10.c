#include <stdio.h>
#include <time.h>

int is_prime(int n);

int isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;

    return 1;
}

int main()
{
    long long int sum = 0;

    int now = time(NULL);

    for (int i = 2; i < 2000000; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            printf("Sum: %llu\r", sum);
        }
    }
    printf("Sum: %llu\n", sum);

    // for (int i = 3; i < 2000000; i += 2)
    // {
    //     printf("%d\r", i);

    //     if (is_prime(i))
    //     {
    //         sum += i;
    //     }
    // }
    int then = time(NULL);
    printf("Sum of all the prime numbers below 2 million is: %llu\n", sum);

    printf("Time elapsed: %d\n", then - now);

    return 0;
}

int is_prime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
