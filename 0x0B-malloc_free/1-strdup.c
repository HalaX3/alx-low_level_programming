#include "main.h"

/**
 * *_strdup - returns a pointer to new allocated space in memory
 * that contains a copy of a given string
 * @str: string to be copied
 * Return: pointer to a new allocated space in memory, NULL otherwise
*/

char *_strdup(char *str)
{
	int itr, len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	;

	len++;

	ptr = malloc(sizeof(*str) * len);

	if (ptr == 0)
		return (NULL);

	for (itr = 0; itr < len; itr++)
		ptr[itr] = str[itr];

	return (ptr);
}
