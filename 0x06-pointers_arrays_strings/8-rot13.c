#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @STR: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *STR)
{
	int cnt = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(STR + cnt) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(STR + cnt) == alphabet[i])
			{
				*(STR + cnt) = rot13[i];
				break;
			}
		}
		cnt++;
	}

	return (STR);
}
