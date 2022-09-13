#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: to check for last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
