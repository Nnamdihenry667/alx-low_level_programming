#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: print decimal numbers 0-9
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{

		printf("%i", i);
		i++;
	}
	printf("\n");
	return (0);
}
