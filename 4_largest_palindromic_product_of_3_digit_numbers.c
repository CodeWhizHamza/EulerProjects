#include <stdio.h>

int reverse_number(int n);
int count_digits(int n);
int power(int base, int exponent);

int main()
{

    int inner = 100;
    int outer = 100;
    int product;
    int maximum_palindromic_number = 0;

    for (outer = 100; outer <= 999; outer++)
    {
        for (inner = 100; inner <= 999; inner++)
        {
            product = outer * inner;

            if (product == reverse_number(product))
            {
                if (maximum_palindromic_number < product)
                    maximum_palindromic_number = product;
            }
        }
    }

    printf("Maximum palindindromic number from product of two 3-digit numbers is: %d\n", maximum_palindromic_number);

    return 0;
}

int reverse_number(int n)
{
    int digit_count = count_digits(n);
    int reversed_number = 0;
    int last_digit;

    for (int i = 1; i <= digit_count; i++)
    {
        last_digit = n % 10;
        reversed_number += last_digit * power(10, digit_count - i);
        n /= 10;
    }
    return reversed_number;
}
int count_digits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count += 1;
        n /= 10;
    }
    return count;
}
int power(int base, int exponent)
{
    int powered = 1;
    for (int i = 1; i <= exponent; i++)
    {
        powered *= base;
    }
    return powered;
}