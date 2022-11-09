#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints nums 1-10
 * Return: always 0
 */
int main(void)
{
	int a;
	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	putchar(10);
}

