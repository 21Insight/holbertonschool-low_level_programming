#include "holberton.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int size = 0, cnt = 0;

	while (*(dest + size) != '\0')
	{
		size++;
	}

	while (size >= 0)
	{
		*(dest + size) = *(src + cnt);
		if (*(src + cnt) == '\0')
		{
			break;
		}
		size++;
		cnt++;
	}
	return (dest);
}
