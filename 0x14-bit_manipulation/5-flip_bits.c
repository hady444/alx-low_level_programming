#include "main.h"
/**
 * flip_bits - flip bits to get another number
 * @n: number
 * @m: convert to
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	n ^= m;

	while (n)
	{
		c += 1 & n;
		n >>= 1;
	}
	return (c);	
}
