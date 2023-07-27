#include "main.h"
/**
 * _strcmp - mkdf
 * @s1: fgs
 * @s2: gfg
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sum = 0;

	while (s1[i] != 0)
	{
		if s1[i] != s2[i]{
			sum += ((int) s1[i] - (int) s2[i]);
			i++;
		}
	}
	return (sum);
}
