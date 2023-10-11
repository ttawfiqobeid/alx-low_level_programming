#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: The last digit of the number
 */
void print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = -n % 10;
}
else
{
last_digit = n % 10;
}
_putchar(last_digit + '0');
}
