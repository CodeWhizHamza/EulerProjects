#include <stdio.h>

unsigned long long int factorial(int n);
int add_digits(unsigned long long int number);

int main()
{
    // printf("Sum: %d\n", add_digits(power(2, 1000)));
    printf("Sum: %d\n", add_digits(factorial(10)));
    return 0;
}

unsigned long long int factorial(int n)
{
    unsigned long long int value = 1;
    for (int i = 1; i <= n; i++)
    {
        value *= i;
    }
    return value;
}
int add_digits(unsigned long long int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}