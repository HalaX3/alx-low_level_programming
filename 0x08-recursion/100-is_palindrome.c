#include "main.h"

int strlen(char *s);
int check_palindrome(char *start, char *end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (1);

	return (check_palindrome(s, 0, strlen(s)));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @x: iteration
 * @length: the length of a string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);

	if (x >= length)
		return (1);

	return (check_palindrome(s, x + 1, length - 1));
}

/**
 * strlen - returns the length of a string
 * @s: string to get the length of
 *
 * Return: length of string
 */

int strlen(char *s)
{
	if (!*s)
		return (0);

	return (1 + strlen(s + 1));
}
