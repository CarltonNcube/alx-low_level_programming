#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                         interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
