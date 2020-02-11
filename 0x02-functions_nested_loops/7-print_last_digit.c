#include "holberton.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
		ld = ld * -1;

		_putchar('0' + ld);

	return (ld);
}
