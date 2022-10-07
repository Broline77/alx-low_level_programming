#include "main.h"

/**
 * _abs - checks the magnitude of a number
 *
 * @n: the numbers to be tested
 *
 * Return: the absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
