#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: An array of integers
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('0' + a[i]);
        if (i < n - 1)
            _putchar(',');
    }
    _putchar('\n');
}
