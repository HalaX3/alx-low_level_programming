#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the lowercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, z = 'z';

	for (a = 'a'; a <= z; a++)
	{
		if (a != 'q' || a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
