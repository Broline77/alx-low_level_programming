#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * used putchar twice max no stdlibs
 *
 * Return: 0
 */
void print_aplhabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
