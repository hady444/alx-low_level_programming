#include "main.h"
#include <string.h>
#include <ctype.h>
int power(unsigned int x, int power);
/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0, len;

	if (!b)
		return (0);
	while (b[i] != '\0')
		i++;
	len = --i;
	i = 0;
	while (len >= 0)
	{
		if (!isdigit(b[len]))
			return (0);
		if (b[len] == '1')
			number += power(2, i);
		i++;
		len--;
	}
	return (number);
}
/**
 * power - calc power
 * @x: number
 * @power: power base
 *
 * Return: result
 */
int power(unsigned int x, int power)
{
	int i, n = 1;

	for (i = 0; i < power; i++)
		n *= x;
	return (n);
}
