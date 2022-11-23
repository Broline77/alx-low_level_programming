#include "main.h"

/**
 * _print_last_digit - prints last digit of an int
 * @n: the int to be passed
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	if (i < 0)
	{
		i = -1;
	}
	_putchar(i + '0');
	return (i);
}
