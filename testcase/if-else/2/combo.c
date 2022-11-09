#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints all posible combo of sing digit nums
 * sep by comma and a space
 * ascending order
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
