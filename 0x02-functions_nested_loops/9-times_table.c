#include "main.h"
/**
 * times_table - fkmsf
 * Description: mklmfs
 * Return: mlfdf
*/
void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
			printf("%2d, ", i * j);
		printf("% 2d\n", i * 9);
	}
}
