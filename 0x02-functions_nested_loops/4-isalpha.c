#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: character type from input
 *
 * Return: 1 if its a alphabet else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
