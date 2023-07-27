#include "main.h"
/**
 * leet - f,dlf
 * @str: fgfg
 * Return: gfg
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char keys[] = "AEOTL";
	int values[] = {4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		for (j = 0 ; keys[j] != '\0' ; j++)
		{
			if (str[i] == keys[j] || str[i] == keys[j] + 32)
			{
				str[i] = 48 + values[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
