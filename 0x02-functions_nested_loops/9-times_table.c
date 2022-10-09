#include "main.h"

/**
 * times_table - print mult table
 * 0-9
 * Return: table
 */
void times_table(void)
{
	int i = 0;
	int j;
	int r;

	while (i < 10)
	{
		r = i * j;
		for (j = 0; j < 10; j++)
		{
			_putchar(r + '0');
		i++;
		}
	}
}

