#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: prints hexadecimal characters
 * Return: 0
 */

int main(void)
{
	char c;
	char f = '0';

	while (f <= '9')
	{
		putchar(f);
		f++;
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
