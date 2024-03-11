#include "search_algos.h"
#include <math.h>
size_t min(size_t a, size_t b);
/**
 * jump_search - searches for a value in a sorted array of
 *		 integers using the Jump search algorithm
 * @array: array of integers.
 * @size: size of array.
 * @value: searched for.
 * Return: index of found int or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, i, m, minimum;

	if (!array || !value)
		return (-1);

	m = sqrt(size);
	low = 0;
	high = m;
	while (low < size)
	{
		if (value <= array[high])
		{
			minimum = min(size, high + 1);
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i < minimum; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		else
		{
			low = high;
			high += m;
		}
	}
	return (-1);
}
/**
 * min - get min of two ints.
 * @a: first num.
 * @b: second num.
 * Return: min int.
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}
