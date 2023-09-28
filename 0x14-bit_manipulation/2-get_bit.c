#include "main.h"
/**
 * get_bit - git the bit at specified index
 * @n: number passed
 * @index: index required
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; n != 0; i++)
	{
		if (index == i)
		{
			return (n % 2);
		}
		n = n / 2;
	}
	return (-1);
}
