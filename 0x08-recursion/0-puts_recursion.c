#include "main.h"

/**
 * _put_recursion - print a string
 * @s: the string to print
 * Return: 0
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
