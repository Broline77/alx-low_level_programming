#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i,j;
	for (i=0; i<10; i++)
	{
		for (j=0; j<15; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}
}

