#include "main.h"
/**
 * _strchr: find first occurance of input char
 * @s: pointer to string
 * @c: input character to be find
 * Return: first occurance index of character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
