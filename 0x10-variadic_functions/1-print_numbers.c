#include "variadic_functions.h"
/**
 * print_numbers - print all inputs
 * @separator: to be put between numbers
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n == 0 || separator == NULL)
		return;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ptr, int), separator);
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(ptr, int));
		}
	}
	va_end(ptr);
}
