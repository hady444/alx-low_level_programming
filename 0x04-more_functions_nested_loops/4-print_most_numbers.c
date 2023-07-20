#include "main.h"
/**
 * print_most_numbers - ldf
 *
 * Return: lmvf
*/

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if ((i == '4') || (i == '2'))
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
