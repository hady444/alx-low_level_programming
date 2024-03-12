#include "search_algos.h"
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
/**
 * exp_binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: array of integers.
 * @size: size of array.
 * @value: value searched.
 * Return: index of value.
 */
int exp_binary_search(int *array, size_t size, int value)
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
/**
 * exponential_search - searches for a value in a sorted array of
 *			integers using the Exponential search algorithm
 * @array: array of integers.
 * @size: size of array.
 * @value: value to search for in array.
 *
 * Return: index of found value or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;
	int *arr, binary_out;

	if (!array || !value)
		return (-1);
	if (array[0] == value)
		return (0);
	low = 1;
	arr = NULL;
	while (low < size && array[low] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		low *= 2;
	}

	high = low;
	low /= 2;
	arr = malloc((min(high + 1, size) - low) * sizeof(int));
	for (i = 0; low + i < min(high + 1, size); i++)
		arr[i] = array[low + i];

	binary_out = exp_binary_search(arr, i, value);
	if (binary_out == -1)
		return (-1);
	else
		return (low + binary_out);
}
