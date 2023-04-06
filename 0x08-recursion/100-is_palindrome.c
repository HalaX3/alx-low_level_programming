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

	return (check_palindrome(s, s + strlen(s) - 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @start: starting position of the string
 * @end: ending position of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (check_palindrome(start + 1, end - 1));
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
