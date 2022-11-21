#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
