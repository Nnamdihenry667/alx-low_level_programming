#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: is the character to be checked
 * Return: 1 if upper case or 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
