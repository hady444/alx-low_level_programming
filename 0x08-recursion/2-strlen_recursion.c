#include "main.h"
/**
 * _strlen_recursion - jdfmg 
 * @s: fggf
 * Return: nkndfg
 */
int _strlen_recursion(char *s)
{
	int i = 1 + _strlen_recursion(s + 1);

	if (*s == '\0')
		return (i);
}
