#include "main.h"
/**
 * _isalpha - kfd
 * @c: kfdg
 * Return: 1 if ok else 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
