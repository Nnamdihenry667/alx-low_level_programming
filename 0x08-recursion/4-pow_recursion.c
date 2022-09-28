#include "main.h"

/**
 * _pow_recursion - calculates the value of an integer raised to a power
 * @x: base
 * @y: power
 * Return: the value of the calculated integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
