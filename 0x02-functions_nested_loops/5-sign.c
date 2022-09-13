#include "main.h"

/**
 * print_sign - checks if number is positive, neutral, or negative
 * @n: checks if number is positve, negative or neutral
 * Return: if postive +1, if negative -1, if neutral 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
