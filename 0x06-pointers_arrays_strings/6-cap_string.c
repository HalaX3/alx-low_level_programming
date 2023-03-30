#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 10 || s[i] == 9 || s[i] == '.')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	}

	return (s);
}
