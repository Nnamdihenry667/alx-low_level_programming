#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints lower and upper case alphabets
 * Return: 0
 */

int main(void)
{
	char c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
