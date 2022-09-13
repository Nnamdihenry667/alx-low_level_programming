#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
