#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints a-Z
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 65; a < 91; a++)
		putchar(a);
	for (a = 97; a < 123; a++)
		putchar(a);
	putchar(10);
	return (0);
}

