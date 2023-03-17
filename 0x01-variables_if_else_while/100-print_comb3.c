#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible combination of two-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit, n = 49;

	for (firstDigit = 48; firstDigit < 57; firstDigit++)
	{
		for (secondDigit = n; secondDigit < 58 && n < 58; secondDigit++)
		{
			putchar(firstDigit);
			putchar(secondDigit);
			if (firstDigit < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
