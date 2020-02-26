#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * compare - compares each character of the string.
 * @s: string
 * @right: straight comparison.
 * @left: reverse comparison.
 * Return: .
 */

int compare(char *s, int right, int left)
{
	if (*(s + right) == *(s + left))
	{
		if (right == left || right == left + 1)
		{
			return (1);
		}
		return (0 + compare(s, right + 1, left - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
