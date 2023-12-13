#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min;

	if (array == NULL || size == 0)
		return -1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = (bound / 2) < size - 1 ? (bound / 2) : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);

	return binary_search(array, size, value);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (low = 0; low <= high; low++)
		{
			printf("%d", array[low]);
			if (low < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}
