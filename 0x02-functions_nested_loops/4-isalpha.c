#include "main.h"

/**
 * _isalpha - function that checks if a character is letter
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is letter
 *	otherwise returns 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
