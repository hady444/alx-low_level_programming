#include "main.h"
/**
 * is_prime_number - fhfh
 *@n: gfg
 * Return: fgfg
 */
int check_prime(int n, int np);
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - fgg
 * @n: fgf
 * @np: gff
 * Return: fgfg
 */
int check_prime(int n, int np)
{
	if (np >= n && n > 1)
		return (1);
	else if (n % np == 0 || n < 0)
		return (0);
	else
		return (check_prime(n, np + 1));
}
