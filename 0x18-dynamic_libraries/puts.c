#include "include"

void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
