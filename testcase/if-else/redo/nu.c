#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}

