#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return -1;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (prev + step < size && array[prev + step] < value)
	{
		prev += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

	for (; prev < size && prev < (prev + step); prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	if (prev < size && array[prev] == value)
		return prev;

	return -1;
}
