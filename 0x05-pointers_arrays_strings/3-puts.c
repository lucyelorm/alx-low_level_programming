#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: The string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
