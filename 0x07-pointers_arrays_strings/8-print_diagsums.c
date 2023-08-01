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
		s1 += a[i * size + i];
		s2 += a[(size - 1) * i + (size - 1 - i)];
	}
	printf("%d, %d", s1, s2);
}
