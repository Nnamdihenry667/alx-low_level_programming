#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix
 * @a: pointer to the 2d array
 * @size: size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;

	int tl = 0;

	int tr = 0;

	int s = size * size;

	for (i = 0; i < size; i += size + 1)
	{
		tl += a[i];
	}
	for (i = size - 1; i < size - 1; i += size - 1)
	{
		tr += a[i];
	}
	printf("%d, %d\n", tl, tr);
}
