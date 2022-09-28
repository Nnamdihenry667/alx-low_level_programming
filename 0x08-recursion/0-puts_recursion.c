#include "main.h"

/**
 * _puts_recursion - it writes a string and to stdout and appends \n
 * @s: string to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}
