#include "main.h"

/**
 * more_numbers - prints the numbers 0-9 ten times
 * Return: the numbers 0-9 ten times + a new line
 */
void more_numbers(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		j = 0;
			while (j < 15)
			{
				_putchar(j + '0');
				j++;
			}
		_putchar(i);
		i++;
		_putchar('\n');
	}
}
