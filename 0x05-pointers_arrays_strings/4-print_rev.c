#include "main.h"
/**
 * reset_to_98 - ,lfg
 * @s: dgf
 *
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len ; i >= 0 ; i--)
		printf("%c", *(s+i));
	printf("\n");	
}
