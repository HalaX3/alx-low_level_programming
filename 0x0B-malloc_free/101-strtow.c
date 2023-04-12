#include <stdlib.h>
#include "main.h"

/**
 * word_counter - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int word_counter(char *s)
{
	int f, counter, wordcounter;

	f = 0;
	wordcounter = 0;
	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			wordcounter++;
		}
	}
	return (wordcounter);
}

/**
 * *strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **ptr2D, *ptr;
	int itr, x = 0, length = 0, w = 0, counter = 0, start, end;

	while (*(str + length))
		length++;

	w = word_counter(str);

	if (w == 0)
		return (NULL);

	ptr2D = (char **) malloc(sizeof(char *) * (w + 1));

	if (ptr2D == NULL)
		return (NULL);

	for (itr = 0; itr <= length; itr++)
	{
		if (str[itr] == ' ' || str[itr] == '\0')
		{
			if (counter)
			{
				end = itr;
				ptr = (char *) malloc(sizeof(char) * (counter + 1));
				if (ptr == NULL)
					return (NULL);
				while (start < end)
					*ptr++ = str[start++];
				*ptr = '\0';
				ptr2D[x] = ptr - counter;
				x++;
				counter = 0;
			}
		}
		else if (counter++ == 0)
			start = itr;
	}
	ptr2D[x] = NULL;
	return (ptr2D);
}
