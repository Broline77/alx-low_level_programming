#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_to_98 - prints nums up to 98 from n
 *
 * int n : starting value of the list
 *
 * Return: list of nums
 */
void print_to_98(int n)
{
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
		if (n != '9')
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

