#include "main.h"
/**
 * print_diagsums - fdfd
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[(size - i - 1)];
		a += size; 
	}
	printf("%d, %d\n", s1, s2);
}
