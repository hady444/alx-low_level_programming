#include "main.h"
/**
 * reverse_array - jijidf
 * @a: fgdg
 * @n: fdd
 */
void reverse_array(int *a, int n)
{
int i, j, t;

	for (i = (n - 1), j = 0 ; i > j ; i--, j++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
