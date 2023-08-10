#include "main.h"
/**
 * malloc_checked - Entry point
 * @b: string we need to duplicate
 * Return: a pointer to the allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
