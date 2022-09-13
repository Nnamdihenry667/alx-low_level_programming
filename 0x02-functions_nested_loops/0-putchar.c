#include <stdio.h>

/**
 * main - entry point
 * Description: a file that prints putchar
 * Return: 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar (c[i]);
	}

	putchar ('\n');

	return (0);

}
