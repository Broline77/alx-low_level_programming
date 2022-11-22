#include "main.h"

/**
 * _islower - checks if char is in lowercase
 * @c: char to be checked
 * Returns: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
