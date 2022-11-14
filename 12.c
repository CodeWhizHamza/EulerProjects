#include <stdio.h>

unsigned long long int get_triangular_number(unsigned long long int n);
int get_factors_count(unsigned long long int n);

int main()
{
    unsigned long long int number = 0;
    for (unsigned long long int i = 1; 1; i++)
    {
        number = get_triangular_number(i);
        printf("%llu\r", i);
        if (get_factors_count(number) > 500)
        {
            printf("%lluth number: %llu is the first triangular number having more than 500 factors.\n", i, number);
            break;
        }
    }

    return 0;
}
unsigned long long int get_triangular_number(unsigned long long int n)
{
    return (n * (n + 1)) / 2;
}
/*
 int get_factors_count(unsigned long long int n)
 {
     int count = 0;
     for (int i = 1; i <= n; i++)
     {
         if (n % i == 0)
             count += 1;
     }
     return count;
 }
*/

int get_factors_count(unsigned long long int n)
{
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count += 1;

            if (n / i != i)
                count += 1;
        }
    }

    return count;
}
