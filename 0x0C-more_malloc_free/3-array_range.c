#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum number that the array will start from
 * @max: maximum number the array will finish
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *p;
	int index, numbers;

	if (min > max)
		return (NULL);
	numbers = max - min + 1;
	p = malloc(sizeof(int) * numbers);
	if (p == NULL)
		return (NULL);
	for (index = 0; min <= max; index++)
		p[index] = min++;

	return (p);
}
