#include "main.h"
/**
 * reset_to_98 - ,lfg
 * @s: dgf
 *
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len ; i >= 0 ; i--)
		_putchar(*(s+i));
	_putchar('\n');	
}
