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
		{
			if (j == 0)
				printf("%3d", i * j);
			else
				printf(", %3d", i * j);
		}
		printf("\n");
	}
}
