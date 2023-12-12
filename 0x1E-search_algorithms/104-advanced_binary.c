#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Lower index of the current subarray
 * @high: Higher index of the current subarray
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (low > high)
		return -1;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = (low + high) / 2;

	if (array[i] == value)
	{
		if (i == 0 || array[i - 1] != value)
			return i;
		return advanced_binary_recursive(array, low, i, value);
	}
	else if (array[i] > value)
		return advanced_binary_recursive(array, low, i, value);
	else
		return advanced_binary_recursive(array, i + 1, high, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array using recursion
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return advanced_binary_recursive(array, 0, size - 1, value);
}
