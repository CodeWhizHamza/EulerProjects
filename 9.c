#include <stdio.h>

int is_pythagoric_triplet(int a, int b, int c);

int main()
{
    int a, b, c;
    for (a = 1; a <= 500; a++)
    {
        for (b = 1; b <= 500; b++)
        {
            for (c = 1; c <= 500; c++)
            {
                if (a + b + c == 1000)
                {
                    if (a < b && b < c && is_pythagoric_triplet(a, b, c))
                    {
                        printf("%d, %d, %d, Product: %d\n", a, b, c, a * b * c);
                    }
                }
            }
        }
    }

    return 0;
}
int is_pythagoric_triplet(int a, int b, int c)
{
    return a * a + b * b == c * c;
}