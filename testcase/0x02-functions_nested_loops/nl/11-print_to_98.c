#include"main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - prints all nums from n to 98
 * @n - start of count
 * Return: void
 */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		printf("%d, ", n);
	}
	printf("\n");
}

