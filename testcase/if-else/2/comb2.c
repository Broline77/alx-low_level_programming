#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints doubles
 * comma + space
 * least combo(a,<b)
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (!(a == b) && (a < b))
			{
				putchar(a);
				putchar(b);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
