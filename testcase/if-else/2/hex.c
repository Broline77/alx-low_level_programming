#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints hexadecimals
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);
	for (a = 97; a < 103; a++)
		putchar(a);
	putchar(10);
	return (0);
}


