#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - alphabets -(qe)
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
		if (!(a == 101) && !(a == 112))
			putchar(a);
	putchar(10);
}

