#include "main.h"

/**
 * _islower - checks for lowercase
 * c: checks the character
 * Return: if character is lowercase returns 1 otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
