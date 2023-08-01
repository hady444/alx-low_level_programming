#include "main.h"
/**
 * print_chessboard - fdfd
 * @a: 2d array
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int size1d =  sizeof(a) / sizeof(a[0]);
	int size2d =  sizeof(a[0]) / sizeof(a[0][0]);

	for (i = 0; i < size1d; i++)
	{
		for (j = 0; j < size2d; j++)
			_putchar(a[i][j])
	}

