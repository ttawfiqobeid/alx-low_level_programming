#!/bin/bash
# Compile individual C files into object files
gcc -c _putchar.c
gcc -c _islower.c
gcc -c _isalpha.c
gcc -c _abs.c
gcc -c _isupper.c
gcc -c _isdigit.c
gcc -c _strlen.c
gcc -c _puts.c
gcc -c _strcpy.c
gcc -c _atoi.c
gcc -c _strcat.c
gcc -c _strncat.c
gcc -c _strncpy.c
gcc -c _strcmp.c
gcc -c _memset.c
gcc -c _memcpy.c
gcc -c _strchr.c
gcc -c _strspn.c
gcc -c _strpbrk.c
gcc -c _strstr.c

# Create the static library libmy.a
ar rcs libmy.a _putchar.o _islower.o _isalpha.o _abs.o _isupper.o _isdigit.o _strlen.o _puts.o _strcpy.o _atoi.o _strcat.o _strncat.o _strncpy.o _strcmp.o _memset.o _memcpy.o _strchr.o _strspn.o _strpbrk.o _strstr.o

# Clean up by removing object files
rm *.o
