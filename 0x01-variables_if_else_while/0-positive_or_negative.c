#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
<<<<<<< HEAD

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
=======
#include <stdio.h> /* Include this header for printf */
=======
#include <stdio.h> // Include this header for printf
>>>>>>> cca54fc3a54d6e7133ef0ed2af2532d565f8c790

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
>>>>>>> 99ae5bd3c7815b18dcf0790982a6493c873ded0f
}
