#include "function_pointers.h"
/**
 * array_iterator - fdf
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
