#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a;
	for (a = 97; a <= 122; a++)
		putchar(a);
	putchar(10);
	return (0);
}
