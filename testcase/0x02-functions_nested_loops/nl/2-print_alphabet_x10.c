#include "main.h"

/**
 * main - prints alphabets x10
 * Return: always o
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar(10);
	}
}

