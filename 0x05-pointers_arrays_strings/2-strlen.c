#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to be checked
 * Return: string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
