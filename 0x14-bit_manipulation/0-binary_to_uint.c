#include "main.h"
#include <math.h>
#include <ctype.h>
/**
 * binary_to_uint - convert binary to int
 * @b: binary number
 * Return: int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	double i = 0;
	
	if (!b)
		return (0);
	while (b[(int) i] != '\0')
	{
		if (!isdigit(b[(int) i]))
			return (0);
		number += (unsigned int) pow(2, i);
	}
	return (number);
}
