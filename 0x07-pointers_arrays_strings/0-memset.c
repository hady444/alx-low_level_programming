#include "main.h"
/**
 * _memset - dfds
 * @s: pointer to first element in buffer
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: cfg
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; n--, i++)
		*(s + i) = b;
	return (s);
}
