#include "main.h"
/**
 * print_sign - prints whether a random integer is positive, negative, or zero
 *
 * Description: prints whether it is positive, negative, or zero.
 * @n: kfdg
 * Return: Always 0 (Success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-1");
		return (-1);
	}
}
