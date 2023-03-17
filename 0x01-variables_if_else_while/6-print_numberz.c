#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
