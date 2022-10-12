#include "main.h"

/**
 * print_most_numbers - prints nums from 1 to 9 exlude 2 and 4
 *
 * Return: a series of nums exept 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
