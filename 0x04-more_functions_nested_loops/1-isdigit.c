#include "main.h"

/**
 * _isdigit - checks if variable is a digit
 * @c: variable to be checked
 * Return: if its a digit return 1 else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
