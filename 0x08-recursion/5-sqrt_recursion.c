#include "main.h"
/**
 * _sqrt_recursion - gf,gl
 * @n: gfgfmk
 * Return: gfg
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 0));
}
int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}
