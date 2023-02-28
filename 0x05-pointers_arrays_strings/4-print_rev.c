#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 */

void print_rev(char *s)
{
	int  rev, len;

	len = 0;

	while (s[len] != '\0')/*loops thru string len & count except last null char*/
	{
		len++;
	}

	for (rev = len - 1; rev >= 0; rev--)
	{
		putchar(s[rev]);
	}

	putchar('\n');
}
