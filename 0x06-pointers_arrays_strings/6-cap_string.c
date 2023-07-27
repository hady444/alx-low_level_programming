#include "main.h"
/**
 * cap_string - okfd
 * @str: fdg
 * Return: fdf
 *
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char del[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n'};

	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
				{
					str[i] = str[i] - ('a' - 'A');
					continue;
				}
		for (j = 0 ; j < 12 ; j++)
		{
			if (str[i] == del[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - ('a' - 'A');
				}
				break;
			}
		}
		i++;
	}
	return (str);
}
