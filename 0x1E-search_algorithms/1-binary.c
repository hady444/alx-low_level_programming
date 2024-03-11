#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 *		   using the Binary search algorithm
 * @array: array of integers.
 * @size: size of array.
 * @value: value searched.
 * Return: index of value.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;

	if (!value || !array)
		return (-1);

	while (left < right)
	{
		i = left;
		printf("Searching in array: ");
		for (; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		if (value == array[left])
			return (left);
		else if (value == array[right])
			return (right);
		else if (value < array[(right + left) / 2])
			right = (right + left) / 2 - 1;
		else if (value > array[(right + left) / 2])
			left = (right + left) / 2 + 1;
		else
			return (-1);
	}
	return (-1);
}
