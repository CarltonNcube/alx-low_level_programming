#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of agrguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, chsr *argv[])
{
(void) argv; / * ignore argv * /
	printf("%d\n", argc - 1);

	return (0);
}
