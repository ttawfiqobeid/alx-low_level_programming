#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';

while (i < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
letter = 'a';
i++;
_putchar('\n'); // Add a new line after each set of alphabets
}
}
