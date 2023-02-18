#include <stdio.h>

/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
   	int a:
	char b;
	long int c;
	long long int d;
	float f;
printf("size of a int: %lu 4 byte(s)\n",(unsigned long)sizeof(a));
printf("size of a char: %lu 1 byte(s)\n",(unsigned long)sizeof(b));
printf("size of a long int: %lu 4 byte(s)\n",(unsigned long)sizeof(c));
printf("size of a long long int: %lu 8 byte(s)\n",(unsigned long)sizeof(d));
printf("size of a float: %lu 4 byte(s)\n",(unsigned long)sizeof(f));
return (0));
}
