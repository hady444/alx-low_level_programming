#include "main.h"
/**
 * sqr - fgg
 * @n: fgf
 * @val: gfgfmk
 * Return: gfg
 */
int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - gf,gl
 * sqr - fgg
 * @n: gfgfmk
 * Return: gfg
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 0));
}
