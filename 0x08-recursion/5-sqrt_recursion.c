#include "main.h"

/**
 * _sqrt - calculates the product
 * @n: integer
 * @counter: supposed square root
 * Return: the square root of the integer passed
 */

int _sqrt(int n, int counter)
{
	if (n == counter * counter)
	{
		return (counter);
	}
	else if (n < counter * counter)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, counter + 1));
		/*solves recursively*/
	}
}

/**
 * _sqrt_recursion - calaculates the square root of an integer using recursion
 * @n: integer
 * Return: the square root using recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(n, 1));
		/*calls the _sqrt function*/
	}
}
