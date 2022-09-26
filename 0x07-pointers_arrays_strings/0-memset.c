#include "main.h"

/**
 * _memset - fills memory with a constant value
 * @s: buffer to be filled
 * @b: constant value
 * @n: memory in bytes
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
