#include "main.h"

/**
 * _islower - checks if a character c is lowercase
 *
 * @c: The integer value it gets
 *
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}