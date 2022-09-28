#include "main.h"

/**
 * prime - checks for prime number
 * @n: integer
 * counter: takes count
 * Return: 1 if prime
 */

int prime(int n, int counter)
{
	if (n % counter == 0)
	{
		return (0);
	}
	else if (n >= (counter + 1) * (counter * 1))
	{
		return (prime(n, counter + 1));
	}
	return (1);
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: integer
 * Return: 1 if prime else return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}
