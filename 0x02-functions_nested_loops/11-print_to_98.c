#include "main.h"
/**
 * print_to_98 - ldfm
 * Description: lkmf
 * @n: lmdf
 * Return: fvf
*/
void print_to_98(int n)
{
	int start = n;

	if (n < 98)
	{
		for (n = start ; n < 98 ; n++)
			if (n == start)
				printf("%d,", n);
			else
				printf(" %d,", n);
		printf(" %d\n", 98);
	}
	else if (n > 98)
        {
		for (n = start ; n > 98 ; n--)
			if (n == start)
				printf("%d,", n);
			else
				printf(" %d,", n);
		printf(" %d\n", 98);
	}
	else
		printf("%d\n", 98);
}
