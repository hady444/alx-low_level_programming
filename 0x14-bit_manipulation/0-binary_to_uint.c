#include "main.h"
#include <string.h>
#include <ctype.h>
int power(unsigned int x, int power);
/**
 * binary_to_uint - convert binary to int
 *
 * @b: binary number
 * 
 * Return: converted outu
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nmbr = 0;
	int i = 0, l;

	if (!b)
		return (0);
	while (b[i] != '\0')
		i++;
	l = i - 1;

	i = 0;
	while (l >= 0)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		
		if (b[l] == '1')
			nmbr += power(2, i);
		l--;
		i++;
	}
	return (nmbr);
}
/**
 * power - T calculation of power
 * @u: number passed
 * @power: power base try
 *
 * Return: output
 */
int power(unsigned int u, int power)
{
	int i, p = 1;

	for (i = 0; i < power; i++)
		p *= u;
	return (p);
}
