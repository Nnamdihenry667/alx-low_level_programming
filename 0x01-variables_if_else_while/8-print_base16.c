#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Description: prints hexadecimal characters
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char f = 0;

	while (f <= 9)
	{
		putchar(f);
		f++;
	}

	for (c; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
