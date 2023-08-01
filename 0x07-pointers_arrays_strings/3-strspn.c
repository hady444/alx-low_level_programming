#include "main.h"
/**
 * _strspn - fdpf,
 * @s: fdf
 * @accept: fgf
 * Return: fgfg
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0' && accept[i] >= '\0' && s[i] == accept[i] ; i++)
	{}
	return (i);
}
