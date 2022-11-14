
// ! Hamza solution
// #include <stdio.h>

// int get_collatz_term_count(int i);

// int main()
// {
//     // return 1;

//     int max_terms = 0;
//     int max_starting_number = 0;
//     int terms = 0;
//     for (int i = 1; i <= 1000000; i++)
//     {
//         terms = get_collatz_term_count(i);
//         if (terms > max_terms)
//         {
//             max_terms = terms;
//             max_starting_number = i;
//         }
//     }

//     printf("%d has %d terms.\n", max_starting_number, max_terms);

//     return 0;
// }
// int get_collatz_term_count(int i)
// {
//     unsigned long long int term_value = i;
//     int terms_count = 0;

//     while (term_value != 1)
//     {
//         if (term_value % 2 == 0)
//         {
//             term_value = term_value / 2;
//         }
//         else
//         {
//             term_value = 3 * term_value + 1;
//         }
//         terms_count += 1;
//     }
//     return terms_count;
// }

// ! Maheen Solution
#include <stdio.h>

int main()
{
    // return 1;
    int count, temp, largestCount = 0, largest = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        count = 0;
        temp = i;
        while (temp != 1)
        {
            if (temp % 2 == 0)
                temp = temp / 2;
            else
                temp = 3 * temp + 1;
            count++;
        }
        if (count > largestCount)
        {
            largestCount = count;
            largest = i;
        }
    }
    printf("%d", largest);
    return 0;
}