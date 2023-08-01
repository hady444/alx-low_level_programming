#include "main.h"
/**
 * _memcpy - dfdg
 * @dest: fdf
 * @src: fgff
 * @n: fdf
 * Return: fdf
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	for (i = 0; n > 0; i++, n--)
		dest[i] = src[i];
	return (dest);
}
