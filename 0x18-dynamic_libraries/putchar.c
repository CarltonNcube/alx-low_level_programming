#include "main.h"

/**
 * main - prints using putcher function from A to Z in lowercase
 * Return - 0 on success
 */

int _putchar(char c)
{
	for (char x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	return 0;
}
