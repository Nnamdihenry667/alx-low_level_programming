#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: pointer to the byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
