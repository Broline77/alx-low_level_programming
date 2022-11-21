#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
		if (!(a == 'e' && 'q'))
				putchar(a);
	putchar(10);
	return (0);
}

