#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates a string with n bytes of another string
 * @s1: string to append
 * @s2: string to be concatenated
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int itr, itr2, length1, length2;

	itr = 0;
	itr2 = 0;
	length1 = 0;
	length2 = 0;
	while (s1 && s1[length1])
		length1++;

	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!str)
		return (NULL);

	while (itr < length1)
	{
		str[itr] = s1[itr];
		itr++;
	}

	while (n < length2 && itr < (length1 + n))
		str[itr++] = s2[itr2++];

	while (n >= length2 && itr < (length1 + length2))
		str[itr++] = s2[itr2++];

	str[itr] = '\0';

	return (str);
}
