#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest: buffer dest
 * @src: string
 * Return: value to the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (index >= 0)
	{
		dest[index] = src[index];

		if (src[index] == '\0')
		{
			return (dest);
		}
		index++;
	}
	return (dest);
}
