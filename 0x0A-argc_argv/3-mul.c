#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts string to int
 * @str: a string that will be converted
 *
 * Return: the integer that is converted from the string
 */

int _atoi(char *str)
{
	int itr, x, num, length, flag, digit;

	itr = 0;
	length = 0;
	x = 0;
	num = 0;
	flag = 0;
	digit = 0;

	while (str[length] != '\0')
		length++;

	while (itr < length && flag == 0)
	{
		if (str[itr] == '-')
			++x;

		if (str[itr] >= '0' && str[itr] <= '9')
		{
			digit = str[itr] - '0';

			if (x % 2)
				digit = -digit;

			num = num * 10 + digit;
			flag = 1;

			if (str[itr + 1] < '0' || str[itr + 1] > '9')
				break;

			flag = 0;
		}

		itr++;
	}

	if (flag == 0)
		return (0);

	return (num);
}

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
