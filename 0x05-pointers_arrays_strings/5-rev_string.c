#include "main.h"
/**
 * print_rev - ,lfg
 * @s: dgf
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = (len - 1) ; i >= 0 ; i--)
		_putchar(s[i]);
}
