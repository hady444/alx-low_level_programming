#include "main.h"
/**
 * print_diagsums - fdfd
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size);
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		_putchar(a[i][i]);
	}
	_putchar(',');
	_putchar(' ');
	for (i = size - 1, j = 0; i < size; i--, j++)
		_putchar(a[i][j]);
}
