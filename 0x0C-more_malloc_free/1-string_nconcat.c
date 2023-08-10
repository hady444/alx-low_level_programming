#include "main.h"
/**
 * _min - d
 * @a: 1s
 * @b: nd
 * Return: minimum
 */
int _min(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	return (a);
}
/**
 * string_nconcat - fg
 * @s1: fgh
 * @s2: fkgf
 * @n: max length
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *s = NULL;
	int i;
	int j;
	unsigned int i1;
	unsigned int j1;

	i = 0;
	i1 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0' ; i++)
	{}
	for (; s2[i1] != '\0' ; i1++)
	{}
	s = malloc((i + i1) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = s1[j];
	for (j1 = 0; j1 < _min(i1, n); j1++)
		s[i + j1] = s2[j1];
	s[i + i1] = '\0';
	return (s);
}
