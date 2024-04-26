#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: A string
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s)
    {
        length++;
        s++;
    }

    return length;
}
