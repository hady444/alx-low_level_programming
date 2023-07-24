#include "main.h"
/**
 *  print_array - ,lfg
 * @a:fdkf
 * @n: kfmsv
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf('\n');
		return;
	}
	int i;

	for (i = 0 ; i < n - 1 ; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
