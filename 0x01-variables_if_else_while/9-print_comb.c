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
	int s;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
		if (s != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
