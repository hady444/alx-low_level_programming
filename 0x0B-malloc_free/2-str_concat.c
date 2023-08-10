#include "main.h"
/**
 * _str_concat - fg
 * @s1: fgh
 * @s2: fkgf
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s = NULL;
	int i;
	int j;
	int i1;
	int j1;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	i1 = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[i1] != '\0' || s2 != NULL)
			i1++;
	}
	s = malloc((i + i1) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = s1[j];
	for (j1 = 0; j1 < i1; j1++)
		s[i + j1] = s2[j1];
	s[i + i1] = '\0';
	return (s);
}
