#include "main.h"

/**
 * _isalpha - checks for alphabets
 * Return 1 if its an alphabet else return 0
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
