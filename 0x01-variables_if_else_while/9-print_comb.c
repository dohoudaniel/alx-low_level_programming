#include <stdio.h>
/**
 * main - Entry point.
 *
 * function main - A program that prints all.
 *
 * Return: Always 0.
 */
int main(void)
{
	int se;

	for (se = 48; se <= 57; se++)
	{
		putchar(se);
		if (se != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
