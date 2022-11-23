#include <stdio.h>
/**
 * main - Entry point.
 *
 * function main - Print integers 0 to 9
 *
 * Return: Always 0.
 */
int main(void)
{
	int f = 0;

	for (; f < 10 ; f++)
		putchar('0' + f);
	putchar('\n');
	return (0);
}
