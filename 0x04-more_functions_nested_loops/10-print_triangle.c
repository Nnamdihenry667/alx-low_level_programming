#include "main.h"

/**
 * print_triangle - prints a triable
 * @size: size of the triangle to be printed
 * Return: 0
 */

void print_triangle(int size)
{
	int row, column, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
		{
			_putchar(' ');
		}
		for (b = row + column; b >= 1; b--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
