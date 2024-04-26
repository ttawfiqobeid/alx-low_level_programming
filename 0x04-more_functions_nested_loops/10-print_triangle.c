#include "main.h"

/**
* print_triangle - Prints a triangle using the '#' character.
* @size: The size of the triangle.
*/
void print_triangle(int size)
{
char s, h;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (s = 1; s <= size; s++)
{
for (h = 1; h <= size - s; h++)
{
_putchar(' ');
}
for (h = 1; h <= s; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
