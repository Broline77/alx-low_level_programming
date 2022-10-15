#include "main.h"

/**
 * reset_to_98 - takes a pointer  to an int and updates the valueto 98
 *
 * @n: the param to be passed
 *
 * Return: always 0
i */
void reset_to_98(int *n)
{
	int *p = &n;
	*p  = 98;
}
