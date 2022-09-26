#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;

	char *n = needle;

	while (*h)
	{
		n = needle;

		h = haystack;

		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
			{
				break;
			}
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
