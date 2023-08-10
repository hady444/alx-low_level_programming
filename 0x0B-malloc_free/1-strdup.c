#include "main.h"
/**
 * _strdup - fg
 * @str: fgh
 * Return: pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	int i;

	while (i != '\0')
		i++;
	char *s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	return (s);
}
