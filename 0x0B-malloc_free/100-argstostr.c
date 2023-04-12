#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int index, index2, x = 0, y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (index2 = 0; av[index][index2]; index2++)
			y++;
	}

	y += ac;

	s = malloc(sizeof(char) * (y + 1));

	if (s == NULL)
		return (NULL);

	while (index < ac)
	{
		index2 = 0;
		while (av[index][index2])
		{
			s[x] = av[index][index2];
			x++;
			index2++;
		}
		if (s[x] == '\0')
		{
			s[x++] = '\n';
		}
		index++;
	}

	return (s);
}
