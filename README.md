<<<<<<< HEAD
# 0x18. C - Dynamic libraries

In this project, i learnt about what dynamic library is, how it works, how to create one and how it works. It also helped me understand the differences between static and shared libraries.

## Function Prototypes :floppy_disk:
The following files are scripts written for the projects written in C:


## Table of contents
Files | Description
----- | -----------
[libdynamic.so](./libdynamic.so) | C dynamic library containing the function definitions
[main.h](./main.h) | Header files containing the function prototypes
[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Bash script that creates a dynamic library called liball.so from all the .c files that are in the current directory
[100-operations.so](./100-operations.so) | C dynamic library that contains C functions that can be called from Python
[random.so](./random.so) | C dynamic library to inject in a giga million program
[101-make_me_win.sh](./101-make_me_win.sh) | Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program
=======
# C - Dynamic libraries

In this project, learned about using dynamic libraries in C, including how to create
them and how to use them with `$LD_LIBRARY_PATH`, `nm`, `ldd`, and `ldconfig`.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libholberton.so](./libholberton.so): C dynamic library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [holberton.h](./holberton.h): Header file containing the prototypes of all functions
  included in `libholberton.so`.

* **1. Without libraries what have we? We have no past and no future**
  * [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh): Bash script that creates a
  dynamic library called `liball.so` from all the `.c` files in the current directory.

* **2. Let's call C functions from Python**
  * [100-operations.so](./100-operations.so): C dynamic library containing basic C
  mathematical operation functions that can be called from Python.
  * Includes:
    * `int add(int a, int b);`
    * `int sub(int a, int b);`
    * `int mul(int a, int b);`
    * `int div(int a, int b);`
    * `int mod(int a, int b);` 
>>>>>>> 6fa5d725fb59e4c44c289f9ef88e69c9ed34533a
