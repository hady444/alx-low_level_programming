#include "main.h"
/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	char *s = malloc((size) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
