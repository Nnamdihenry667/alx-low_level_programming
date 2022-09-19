#include "main.h"

/**
 * puts2 - prints every other character starting with a newline
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int a, b;

	a = 0;

	b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}
