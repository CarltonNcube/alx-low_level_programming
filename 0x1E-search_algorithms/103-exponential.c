#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
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

	min = bound / 2;
	bound = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", min, bound);

	return binary_search(array, min, bound, value);
}

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the search range
 * @high: Ending index of the search range
 * @value: Value to search for
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		printf("Searching in array: %d", array[low]);

		for (size_t i = low + 1; i <= high; i++)
			printf(", %d", array[i]);

		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}
