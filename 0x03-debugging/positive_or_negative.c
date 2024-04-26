#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - Prints a number
 * @i: The number to check
 * Description: This function takes an integer, checks if it's positive,
 * zero, or negative, and prints the result.
 */
void positive_or_negative(int i)
{
srand(time(0));
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
