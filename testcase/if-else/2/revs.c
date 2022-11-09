#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowercase in reverse
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
