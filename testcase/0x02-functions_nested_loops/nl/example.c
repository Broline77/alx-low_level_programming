#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b < 'z'; b++)
		{
			putchar(b);
		}
		putchar(10);
	}
	return (0);
}
