#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements in an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	int temporal;

	for (i = 0; i < n--; i++)
	{
		temporal = a[i];
		a[i] = a[n];
		a[n] = temporal;
	}
}
