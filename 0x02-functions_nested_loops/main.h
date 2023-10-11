#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to be checked
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 and print + if n is greater than zero,
 *         0 and print 0 if n is zero,
 *        -1 and print - if n is less than zero
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to be checked
 *
 * Return: the absolute value of n
 */
int _abs(int n);

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 */
void times_table(void);

/**
 * add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the addition
 */
int add(int a, int b);

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n);

#endif /* MAIN_H */
