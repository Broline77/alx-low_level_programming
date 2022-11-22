#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (!(ab == cd))
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
