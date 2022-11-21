#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a;
	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar(10);
	return (0);
}

