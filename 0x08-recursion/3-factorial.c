#include "main.h"

/**
 * factorial - calculates the factorial of an integer
 * @n: intger
 * Return: the factorial of the intger
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
