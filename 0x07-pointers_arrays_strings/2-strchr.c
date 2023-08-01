#include "main.h"
/**
 * _strchr: find first occurance of input char
 * @c: input character to be find
 * Return: first occurance index of character c
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
