#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * reset_to_98 - takes a pointer to an int as parameter & updates the value
 * @n: pointer to int n
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b);

/**
 * main - returns the length of a string
 * @s: string
 */

int _strlen(char *s);

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str);

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s);

/**
 * print_rev - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s);

#endif