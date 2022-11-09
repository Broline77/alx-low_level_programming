#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints combo of 3
 * with comma nad space
 * abc a<b b<c
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (a < b && b < c && !(a == b) && !(b == c) && !(a == c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
