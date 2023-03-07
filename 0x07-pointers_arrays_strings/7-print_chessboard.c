#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard.
 * @a: chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			putchar(a[row][column]);
		}
		putchar('\n');
	}
}
