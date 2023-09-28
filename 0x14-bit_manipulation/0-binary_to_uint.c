#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b) - 1, sum = 0, count = 0, x, incrementor = 1;

	if (!b)
		return (0);

	for (; i > -1; i--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			if (count == 0)
			{
				sum += 1;
				count++;
				continue;
			}
			x = count;
			do {
				incrementor *= 2;
				x--;
			} while (x > 0);
			sum += incrementor;
			incrementor = 1;
		}
		count++;
	}
	return (sum);
}
