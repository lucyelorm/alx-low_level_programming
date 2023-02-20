#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase followed by uppercase alphabets
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		putchar(lowercase);
	}
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		putchar(toupper(lowercase));
	}
	putchar('\n');
	return (0);
}
