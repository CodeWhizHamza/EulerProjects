#include <stdio.h>

int fib(int n);

int main()
{
    int i = 1;
    int fib_number = 0;
    int sum = 0;

    while (fib_number <= 4000000)
    {
        fib_number = fib(i);
        if (fib_number % 2 == 0)
            sum += fib_number;
        i += 1;
    }
    printf("Sum of all even fibonnaci numbers that are less than 4 millions is %d\n", sum);
    return 0;
}

// Using recursion
// int fib(int n) {
//     if (n <= 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }

//     return fib(n - 1) + fib(n - 2);
// }

// Using normal logic
int fib(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    int counter = 2;

    int nums[] = {0, 1};
    int next = 0;

    while (counter <= n)
    {
        next = nums[0] + nums[1];
        nums[0] = nums[1];
        nums[1] = next;

        counter += 1;
    }
    return nums[1];
}