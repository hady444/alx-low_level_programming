#include "main.h"
/**
 * _strlen - ,lfg
 * @s: dgf
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (*(s+i) == '\0')
			return (i);
		i++;
	}
}
