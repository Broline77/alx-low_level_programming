#include "main.h"

/**
 * _isupper: checkks if char is uppercase
 * Return 1 if upper else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else 
		return (0);
}
