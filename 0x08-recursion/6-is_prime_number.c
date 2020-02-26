#include "holberton.h"

/**
 * prime - detects if an input number is a prime number.
 * @n: input number.
 * @m: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, m + 1));
}


/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
