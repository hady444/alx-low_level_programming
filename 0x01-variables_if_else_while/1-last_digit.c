#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - calulate last digit
 *
 * Descroption: the function prints ">5 or <6&!=0 or =0"
 *
 * Return: 0 Success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld;

	ld = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is and is %d greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is %d is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is and is %d less than 6 and not 0\n", n, ld);
	}
	return (0);
}
