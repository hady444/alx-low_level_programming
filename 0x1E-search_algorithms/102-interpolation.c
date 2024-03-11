#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 *			  using the Interpolation search algorithm.
 * @array: array of integers.
 * @size: size of array.
 * @value: searched for value.
 * Return: index found or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array || !value)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		if (low >= size)
			return (-1);
		if (high == 0 && array[high] != value)
			break;
	}
	return (-1);
}
