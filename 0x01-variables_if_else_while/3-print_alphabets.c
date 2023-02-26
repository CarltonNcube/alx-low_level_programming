#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase followed by a newline
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char low;

	for (low = 'a' <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	purchar(low);
	putchar('\n');

	return (0):
}
