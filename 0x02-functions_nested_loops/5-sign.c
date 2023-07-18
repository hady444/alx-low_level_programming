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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
