#include "main.h"

int _atoi(char *s) 
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == '\r' || s[i] == '\f' || s[i] == '\v')
		{
		i++;
		}

	if (s[i] == '-')
	{	
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return result * sign;
}
