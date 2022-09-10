#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * Description: print single sigit decimals
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
