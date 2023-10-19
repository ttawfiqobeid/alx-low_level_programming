#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: A string
 */
void puts_half(char *str)
{
    int length = _strlen(str);
    int start;

    if (length % 2 == 0)
        start = length / 2;
    else
        start = (length - 1) / 2;

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}
