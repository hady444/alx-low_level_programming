#include "variadic_functions.h"
/**
 * sum_them_all - sum all inputs
 * @n: number of numbers
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_ptr;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(sum_ptr, n);
	for (; i < n; i++)
		sum += va_arg(sum_ptr, int);
	va_end(sum_ptr);
	return (sum);
}
