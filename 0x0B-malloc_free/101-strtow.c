#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - Locates the index marking the end of first word
 * @str: the string to be searched
 *
 * Return: the index maarking the end of the initial word  pointing to by str
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * cont_words - counts the number of words contained within a string.
 * @str: the string to be searched
 *
 * Return: the number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return:
