#include "main.h"
/**
 * _strcpy - ,lfg
 * @dest: jhnj
 * @src: dgf
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0')

	return (dest);
}
