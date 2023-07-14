#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints whether a random integer is positive, negative, or zero
 *
 * Description: This function generates a random integer between
 * -RAND_MAX/2 and RAND_MAX/2
 * and prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
