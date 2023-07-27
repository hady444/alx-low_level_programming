#include "main.h"
/**
 * cap_string - okfd
 * @str: fdg
 * Return: fdf
 *
 */
char *cap_string(char *str);
{
	int i = 0;
	int j;
	char del[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n'};

	while (str[i + 1] != '\0')i
	{
		for (j = 0 ; j < 12 ; j++)
		{
			if (str[i] == del[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i] = str[i] - ('a' - 'A');
				}
				break;
			}
		}
		i++;
	}
	return (str);
}
