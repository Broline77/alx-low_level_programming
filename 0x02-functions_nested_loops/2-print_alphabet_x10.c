#include "main.h"

/**
 * print_alphabet_x10 - prints the aplhabet 10 time in lowecase
 * followed by a new line
 * no stdlib
 *
 * Return: Allways o
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
