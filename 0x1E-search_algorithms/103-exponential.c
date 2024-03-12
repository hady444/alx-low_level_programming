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
 * @high: last index to search.
 * @low: passed index from exponential search fun as the beginning of BS.
 * @value: value searched.
 * Return: index of value.
 */
int exp_binary_search(int *array, size_t high, size_t low, int value)
{
	size_t candidate_index;

	high -= 1;
	while (low <= high)
	{
		candidate_index = low;
		printf("Searching in array: ");
		for (; candidate_index < high; candidate_index++)
			printf("%d, ", array[candidate_index]);
		printf("%d\n", array[high]);
		candidate_index = low + (high - low) / 2;
		if (value == array[candidate_index])
			return (candidate_index);
		else if (value > array[candidate_index])
			low = candidate_index + 1;
		else
			high = candidate_index - 1;
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
	size_t low, high;

	if (!array || !value)
		return (-1);
	if (array[0] == value)
		return (0);
	low = 1;
	while (low < size && array[low] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		low *= 2;
	}

	high = low;
	low /= 2;

	return (exp_binary_search(array, min(high + 1, size), low, value));
}
