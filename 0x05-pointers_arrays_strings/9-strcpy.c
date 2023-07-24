#include "main.h"
/**
 * _strcpy - ,lfg
 * @dest: jhnj
 * @src: dgf
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
