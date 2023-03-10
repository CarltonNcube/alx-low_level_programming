#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: numbe to calculate the natural square root
 *
 * Return: the naturasl square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt,(n, 1));
}
/**
 * _sqrt - calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
i	return (_sqrt(n, i + 1));
}
