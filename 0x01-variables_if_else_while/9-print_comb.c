#include <stdio.h>
/**
 * main - entry point
 *
 * function main - a program that prints all possible combinations of single digit numbers
 *
 * Return: 0
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
