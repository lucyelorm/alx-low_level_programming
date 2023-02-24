#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal line using the \ character.
 * @n: number of \ characters to be printed.
 */

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
				putchar(' ');
			putchar('\\');

			if (length == n - 1)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}

