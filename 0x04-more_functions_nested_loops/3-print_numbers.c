#include "main.h"

/**
 * print_numbers - prints nums 1-9 using putchar
 * Return: the numbers 1-9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
