#include "main.h"

/**
 * fizz_buzz - prints numbers 1 to 100, replaces multiples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples of both with FizzBuzz
 */
void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar_str("FizzBuzz");
}
else if (i % 3 == 0)
{
_putchar_str("Fizz");
}
else if (i % 5 == 0)
{
_putchar_str("Buzz");
}
else
{
_putchar_int(i);
}

if (i != 100)
{
_putchar(' ');
}
}
_putchar('\n');
}

