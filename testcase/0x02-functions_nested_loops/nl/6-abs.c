#include "main.h"

/**
 * _abs - computes the absolute value of an int
 *
 * @int: aparam to be passed
 * Return: the absolute valie of an in int
 *
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
