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
	int fM;

	for (fM = 0; fM < 10 ; fM++)
	{
		putchar('0' + fM);
	}
	putchar('\n');
	return (0);
}
