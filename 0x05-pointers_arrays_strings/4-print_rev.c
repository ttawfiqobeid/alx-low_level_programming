#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: A string
 */
void print_rev(char *s)
{
    int length = _strlen(s);

    while (length > 0)
    {
        length--;
        _putchar(s[length]);
    }
    _putchar('\n');
}
