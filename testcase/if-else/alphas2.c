#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints alphabets
 * Return: always 0
 */
int main(void)
{
	int a = 'a';

	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
