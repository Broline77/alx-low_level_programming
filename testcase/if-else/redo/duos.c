#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int n;
	int a;
	for (a = 48; a < 58; a++)
	{
		for (n = 48; n < 58; n++)
		{
			if (!(a == n) && (a < n))
			{
				putchar(a);
				putchar(n);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}

