#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: given number
 * @index: needed
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
