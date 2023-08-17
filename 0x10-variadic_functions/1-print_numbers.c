#include "variadic_functions.h"
/**
 * print_numbers - print all inputs
 * @separator: to be put between numbers
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list ptr;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ptr, n);
	if (n != 0)
		printf("%d", va_arg(ptr, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", sep, va_arg(ptr, int));
	}
	printf("\n");
	va_end(ptr);
}
