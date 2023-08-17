#include "variadic_functions.h"
/**
 * print_strings - print all inputs
 * @separator: to be put between numbers
 * @n: number of numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list ptr;
	char *temp;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ptr, n);
	if (n != 0)
		printf("%s", va_arg(ptr, char*));
	for (i = 1; i < n; i++)
	{
		temp = va_arg(ptr, char*);
		if (temp != NULL)
			printf("%s%s", sep, temp);
		else
			printf("%s(nil)", sep);
	}
	printf("\n");
	va_end(ptr);
}
