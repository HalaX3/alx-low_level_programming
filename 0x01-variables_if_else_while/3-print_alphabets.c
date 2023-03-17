#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, z = 'z', A, Z = 'Z';

	for (a = 'a'; a <= z; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= Z; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
