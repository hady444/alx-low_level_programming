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
	size_t left = 0, right = size - 1, candidate_index;

	if (!value || !array)
		return (-1);

	while (left <= right)
	{
		candidate_index = left;
		printf("Searching in array: ");
		for (; candidate_index < right; candidate_index++)
			printf("%d, ", array[candidate_index]);
		printf("%d\n", array[right]);
		candidate_index = left + (right - left) / 2;
		if (value == array[candidate_index])
			return (candidate_index);
		else if (value > array[candidate_index])
                        left = candidate_index + 1;
		else
			right = candidate_index - 1;
	}
	return (-1);
}
