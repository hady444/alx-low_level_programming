#include "main.h"
/**
 * string_toupper - okfd
 * @str: fdg
 * Return: fdf
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		if (str[i] >= 'a')
			str[i] =(char) (str[i] - 32);
		i++;
	return (str);
}
