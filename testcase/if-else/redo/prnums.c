#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
