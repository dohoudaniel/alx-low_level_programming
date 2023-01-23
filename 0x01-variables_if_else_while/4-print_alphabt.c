#include <stdio.h>
/**
 * main - Entry point.
 *
 * function main - Prints A to Z without Q and E
 *
 * Return: Always 0.
 */
int main(void)
{
	char bar;

	for (bar = 'a' ; bar <= 'z' ; bar++)
	{
		if (bar != 'e' && bar != 'q')
		{
			putchar(bar);
		}
	}
	putchar('\n');
	return (0);
}
