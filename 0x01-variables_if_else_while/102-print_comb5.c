#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible combination of two two-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit, fourthDigit, n1, n2;

	for (firstDigit = 48; firstDigit < 58; firstDigit++)
	{
		for (secondDigit = 48; secondDigit < 58; secondDigit++)
		{
			if (firstDigit == 9 && secondDigit == 9)
			{
				break;
			}
			n1 = firstDigit;
			for (thirdDigit = n1; thirdDigit < 58; thirdDigit++)
			{
				n2 = secondDigit + 1;
				for (fourthDigit = n2; fourthDigit < 58; fourthDigit++)
				{
					putchar(firstDigit);
					putchar(secondDigit);
					putchar(' ');
					putchar(thirdDigit);
					putchar(fourthDigit);
					if (firstDigit == 57 && secondDigit == 56)
					{

					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
