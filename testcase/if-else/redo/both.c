#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	for ( a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar(10);
}
