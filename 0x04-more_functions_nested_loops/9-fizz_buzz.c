#include "main.h"
#include <stdio.h>
int main(void)
{
fizz_buzz();
return (0);
}
void fizz_buzz(void)
{
char i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}

if (i != 100)
{
printf(" ");
}
}
printf("\n");
}
