#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int n;
	for (n = 48; n < 58; n++)
		putchar(n);
	putchar(10);
	return (0);
}
