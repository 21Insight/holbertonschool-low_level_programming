#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that generates random valid password for the program
 * 101-crackme
 * Return: random password
 */
int main(void)
{
	srand(time(NULL));
	printf("%d", rand());
	return (0);
}
