#include "main.h"

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference between a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}


/**
 * custom_div - Divides two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The quotient of a and b
 */
int custom_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - Computes the remainder of dividing two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The remainder of dividing a by b.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
