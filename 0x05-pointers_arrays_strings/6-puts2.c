#include "main.h"
/**
 * puts2 - ,lfg
 * @str: dgf
 *
 */
void puts2(char *str)
{
	int l = strlen(str);
	int i;

	for (i = 0 ; i < l ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
