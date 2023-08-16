#include "function_pointers.h"
/**
 * print_name - print name of function
 * @name: string to be printed
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
