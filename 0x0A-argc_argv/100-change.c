#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum num of coins to make change
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int n, itr, res;
	int arr_coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	res = 0;

	if (n < 0)
	{
	printf("0\n");
	return (0);
	}

	for (itr = 0; itr < 5 && n >= 0; itr++)
	{
		while (n >= arr_coins[itr])
		{
			res++;
			n -= arr_coins[itr];
		}
	}

	printf("%d\n", res);
	return (0);
}
