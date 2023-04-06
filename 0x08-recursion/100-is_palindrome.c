#include "main.h"

int check_palindrome(char *s, int x, int length);
int strlength(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, strlength(s)));
}

/**
 * strlength - returns the length of a string
 * @s: string to be calculated
 *
 * Return: length of string
 */

int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength(s + 1));
}

/**
 * check_palindrome - checks the characters for palindrome
 * @s: string to be checked
 * @x: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (check_palindrome(s, x + 1, length - 1));
}
