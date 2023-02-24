#include <stdio.h>
#include "main.h"
/**
 * print_square - Prints a with the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				putchar('#');

			if (height == size - 1)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
