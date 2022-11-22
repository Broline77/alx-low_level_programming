#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a;
	int n;
	for (a = 48; a <= 57; a++)
		putchar(a);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar(10);
	return (0);
}

