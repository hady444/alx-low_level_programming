#include "main.h"
/**
 *  print_array - ,lfg
 * @a:fdkf
 * @n: kfmsv
 */
void print_array(int *a, int n)
{
	if (n < 0)
	{
		printf("%d\n",n);
	}
	else
	{
		int i;

		for (i = 0 ; i < n - 1 ; i++)
			printf("%d, ", a[i]);
		printf("%d  %d\n", a[n - 1], n);
	}
}
