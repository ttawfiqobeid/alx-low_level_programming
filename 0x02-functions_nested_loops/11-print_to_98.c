#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
i = n;
for (; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
i = n;
for (; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
}
