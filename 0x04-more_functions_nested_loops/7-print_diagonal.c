#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the num of times \ is printed
 *
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int i = 0;

		while (i < n)
		{
			_putchar('\\');
			i++;
		}
	_putchar('\n');
}
