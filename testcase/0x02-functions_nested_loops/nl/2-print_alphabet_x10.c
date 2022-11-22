#include "main.h"

/**
 * main - prints alphabets x10
 * Return: always o
 */
void print_alphabet_x10(void);
{
	int a;
	int b;

	for (a = 'a'; a <= "z"; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(a);
		}
	}
	_putchar(10);
}

