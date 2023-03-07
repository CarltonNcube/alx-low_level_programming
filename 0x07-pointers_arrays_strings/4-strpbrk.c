#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry
 * @s: input
 * @accept: input00
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)

{
	int i, n;

	for  (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		if (s[i] == accept[n])
		return (s + i);
		}
	}
	return (NULL);
}
