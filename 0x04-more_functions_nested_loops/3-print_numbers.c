#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints two random numbers
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + 48);
	}

	_putchar('\n');
}
