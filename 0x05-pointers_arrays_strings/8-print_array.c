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
		printf("\n");
	}
	else
	{
		int i;

		for (i = 0 ; i < (n - 1) ; i++)
		{
			if (i == n - 1)
			{
				printf("%d", a[n - 1]);
				break;
			}
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
