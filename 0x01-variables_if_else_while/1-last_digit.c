#include <stdlib.h>
#include <time.h>
#include <stdio.h> /* Include this header for printf */

/* betty style doc for function main goes there */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n < 0)
    {
        lastDigit = -n % 10; /* Calculate the last digit of n when n is negative */
    }
    else
    {
        lastDigit = n % 10; /* Calculate the last digit of n when n is non-negative */
    }

    printf("Last digit of %d is %d ", n, lastDigit);

    if (lastDigit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}
