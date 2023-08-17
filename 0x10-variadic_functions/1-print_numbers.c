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
	printf("%d", va_arg(ptr, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(ptr, int));
	}
	printf("\n");
	va_end(ptr);
}
