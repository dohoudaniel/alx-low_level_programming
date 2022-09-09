#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int n;
	int formern;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	formern = n % 10;

	if (formern > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, formern);
	} else if ( formern == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, formern);
	} else
	{
		printf("Last digit of %d is %d and is less than 6\n", n, formern);
	}
	return (0);
}
