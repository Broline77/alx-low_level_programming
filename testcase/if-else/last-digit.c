#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -checks the last digit
 * @n int to be checked
 * Return: the last digit plus a string
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (n > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, a);
	else if (n == 0)
		printf("the laast digit of %d is %d and is 0\n", n, a);
	else
		printf("the last digit od %d is %d and is less than 6 and is not 0\n", n, a);
	return (0);
}
