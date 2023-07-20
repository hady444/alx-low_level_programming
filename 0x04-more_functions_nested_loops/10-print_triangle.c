#include "main.h"
/**
 * print_triangle - fdmg
 * @size: mlf
 * Return: gfg
 */

void print_triangle(int size)
{
	int i, j;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size ; i > 0 ; i++)
		{
			for (j = 1 ; j < i ; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
