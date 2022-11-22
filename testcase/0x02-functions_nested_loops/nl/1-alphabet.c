#include "main.h"

/**
 * main -prints alphas in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <='z'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
