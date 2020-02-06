#include <stdio.h>

/**
 *main - print lowercase & UPPERCASE
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
		{
		putchar(ALPHA);
		ALPHA++;
		}
	putchar('\n');

	return (0);
}
