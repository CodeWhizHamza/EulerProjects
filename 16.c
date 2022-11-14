#include <stdio.h>

unsigned long long int power(int base, int exponent);
int add_digits(unsigned long long int number);

int main()
{
    // printf("Sum: %d\n", add_digits(power(2, 1000)));
    printf("Sum: %llu\n", power(2, 50));
    return 0;
}

unsigned long long int power(int base, int exponent)
{
    unsigned long long int powered = 1;
    for (int i = 0; i < exponent; i++)
    {
        powered *= base;
    }
    return powered;
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