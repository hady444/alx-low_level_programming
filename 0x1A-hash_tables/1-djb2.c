#include "hash_tables.h"
/**
 * hash_djb2 - a hash function
 * @str: key string passed
 * Return: hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int i, j = 0;
	unsigned int long hash_val = 5381;

	while ((str[j] != '\0'))
	{
		i = str[j];
		hash_val = ((hash_val << 5) + hash_val) + i;
		j++;
	}
	return (hash_val);
}
