#include "main.h"

/**
 * _memcpy - bytes of a memory
 * @dest: where bytes are to be copied
 * @src: where bytes are to be copied from
 * @n: bytes to be copied
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
