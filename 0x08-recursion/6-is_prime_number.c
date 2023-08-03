#include "main.h"
/**
 * is_prime_number - fhfh
 * @n: gfg
 * @np: fgg
 * Return: fgfg
 */
int check_prime(int n, int np);
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (check_prime(n, 2));
}
/**
 * check_prime - fgg
 * @n: fgf
 * @np: gfdf
 * Return: fgfg
 */
int check_prime(int n, int np)
{
	if (np >= n && n > 1)
		return (1);
	else if (n % np == 0 || n <= 0)
		return (0);
	else
		return (check_prime(n, np + 1));
}
