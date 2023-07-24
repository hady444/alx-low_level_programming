#include "main.h"
/**
 * _strlen - ,lfg
 * @s: dgf
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (true)
	{
		if (s[i] == '\0')
			return (++i);
		i++;
	}
}
