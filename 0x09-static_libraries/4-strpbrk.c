#include "main.h"
/**
 * _strpbrk - fdpf,
 * @s: fdf
 * @accept: fgf
 * Return: fgfg
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return ('\0');
}
