#include "main.h"
/**
 * swap_int - ,lfg
 * @a: dgf
 * @b: fggf
 */
void puts_half(char *str)
{
	int l = strlen(str);
	int i;


	if (l % 2 == 0)
		i = l / 2;
	else
		i = (l / 2) + 1;
	for (; i < l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
