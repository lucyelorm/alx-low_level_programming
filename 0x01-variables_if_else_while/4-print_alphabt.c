#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lower case,eclude e & q
 *
 * Return: O, if succesful
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		if (lowercase != 'e' && lowercase != 'q')
			putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
