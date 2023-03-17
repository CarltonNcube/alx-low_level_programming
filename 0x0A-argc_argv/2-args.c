#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the agruments content
 * @argc: argument count
 * @argv: arguments counted
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
