#include "main.h"

/**
 * print_last_digit - prints the last digit in a number
 *
 * @n - number to be checked
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n % 10);
}
