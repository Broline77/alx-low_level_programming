#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints lowercase alphabets
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar(10);
	return (0);
}
