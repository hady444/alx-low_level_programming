#include "main.h"
/**
 *leet - f,dlf
 * @str: fgfg
 * Return: gfg
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 4;
			continue;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 3;
			continue;
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 0;
			continue;
		}
		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 7;
			continue;
		}
		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 1;
			continue;
		}
	}
	return (str);
}
