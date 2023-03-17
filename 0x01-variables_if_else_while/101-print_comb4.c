#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible combination of three-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit, n1, n2;

	for (firstDigit = 48; firstDigit < 56; firstDigit++)
	{
		n1 = firstDigit + 1;
		for (secondDigit = n1; secondDigit < 57 && n1 < 57; secondDigit++)
		{
			n2 = secondDigit + 1;
			for (thirdDigit = n2; thirdDigit < 58 && n2 < 58; thirdDigit++)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);
				if (firstDigit < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
