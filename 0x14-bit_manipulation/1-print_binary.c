#include "main.h"
/**
 * print_binary - print from int to binary
 * @n: passed int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + 48);
	}
	else
		_putchar(48);
}
