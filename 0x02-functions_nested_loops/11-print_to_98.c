#include "main.h"

/**
 * print_to_98 - prints numbers till 98
 * @n: count number
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
		}

	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n++)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
		}

	}
}
