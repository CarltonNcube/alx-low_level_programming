#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integet to be swapped.
 * Return: nothing 
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
