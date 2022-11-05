#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints alphabets in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
