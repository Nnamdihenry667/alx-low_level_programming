#include "main.h"

/**
 * _strlen_recursion - counts the length of a string using recursion
 * @s: pointer to the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1) + 1;
		count++;
	}
	return (count);
}
