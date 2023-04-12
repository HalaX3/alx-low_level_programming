#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of the given size and assign the char given
 * @size: the size of the array
 * @c: the character to be assigned
 * Description: creates an array of given size and values
 * Return: pointer to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
