#include "main.h"
/**
 * print_diagsums - fdfd
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i][i];
	}
	for (i = (size - 1), j = 0; j < size; i--, j++)
		s2 += a[i][j];
	printf("%d, %d", s1, s2);
}
