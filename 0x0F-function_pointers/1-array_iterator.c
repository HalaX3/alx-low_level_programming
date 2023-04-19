#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem on a new line using pointer to funct
 * @array: array
 * @size: size of the array to print
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
