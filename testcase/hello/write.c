#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * 60 - max number of characters to be printed
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",60);
	return (1);
}
