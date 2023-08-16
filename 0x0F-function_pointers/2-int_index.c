#include "function_pointers.h"
/**
 * int_index - dsa
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to fun
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		i = 0;
		for (; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}

