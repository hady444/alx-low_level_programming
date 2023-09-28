#include "main.h"
/**
 * get_bit - git the bit at specified index
 * @n: number passed
 * @index: index required
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	

	if (index > sizeof(n) * 8)
		return (-1);
	
	return (1 & (n >> index));
}
