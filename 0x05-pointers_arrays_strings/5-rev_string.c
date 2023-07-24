#include "main.h"
/**
 * rev_string - ,lfg
 * @s: dgf
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char *o;

	for (i = (len - 1) ; i >= 0 ; i--)
		strcat((s[i]),o);
	*s = *o;
}
