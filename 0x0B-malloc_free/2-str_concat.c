#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two given strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a new allocated space containing the two concatenated
 *         strings, or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	char *conctstr;
	int itrs1, itrs2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	itrs1 = 0;
	itrs2 = 0;

	while (s1[itrs1] != '\0')
		itrs1++;
	while (s2[itrs2] != '\0')
		itrs2++;

	conctstr = malloc(sizeof(char) * (itrs1 + itrs2 + 1));

	if (conctstr == NULL)
		return (NULL);

	itrs1 = 0;
	itrs2 = 0;

	while (s1[itrs1] != '\0')
	{
		conctstr[itrs1] = s1[itrs1];
		itrs1++;
	}
	while (s2[itrs2] != '\0')
	{
		conctstr[itrs1] = s2[itrs2];
		itrs1++, itrs2++;
	}
	conctstr[itrs1] = '\0';

	return (conctstr);
}
