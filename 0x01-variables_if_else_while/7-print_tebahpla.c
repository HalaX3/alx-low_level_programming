#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the lowercase letters in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a', z;

	for (z = 'z'; z >= a; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
