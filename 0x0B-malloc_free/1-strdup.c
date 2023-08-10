#include "main.h"
/**
 * _strdup - fg
 * @str: fgh
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s = NULL;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (i != '\0')
		i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}
