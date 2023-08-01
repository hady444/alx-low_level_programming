#include "main.h"
/**
 * print_diagsums - fdfd
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size);
{
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar(a[i][i]);
	}
	_putchar('\n');
}
