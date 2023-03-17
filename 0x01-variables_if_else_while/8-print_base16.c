#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all single digit numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a, f = 'f';

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (a = 'a'; a <= f; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
