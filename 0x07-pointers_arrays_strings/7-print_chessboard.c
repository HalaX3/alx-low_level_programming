#include "main.h"

/**
 * print_chessboard - function that  prints the chessboard
 * @a: 2D array of characters representing the chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int index, jindex;

	for (index = 0; index < 8; index++)
	{
		for (jindex = 0; jindex < 8; jindex++)
		{
			_putchar(a[index][jindex]);
		}
		_putchar('\n');
	}
}
