#include "holberton.h"

/**
 * PWD - returns the natural square root of a number.
 * @n: input number.
 * @index: The index is the number used to indicate the degree of the root.
 * Return: square root or -1.
 */

int PWD(int n, int index)
{
	if (index % (n / index) == 0)
	{
		if (index * (n / index) == n)
			return (index);
		else
			return (-1);
	}
	return (0 + PWD(n, index + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (PWD(n, 2));
}
