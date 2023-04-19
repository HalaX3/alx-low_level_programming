#include "function_pointers.h"

/**
 * int_index - function that searches for an integer using pointer to function
 * @array: array
 * @size: size of elements that an array has
 * @cmp: pointer to function
 * Return: 0 ,otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (itr = 0; itr < size; itr++)
	{
		if (cmp(array[itr]))
		{
			return (itr);
		}
	}

	return (-1);
}
