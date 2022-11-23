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
	char ba;

	for (ba = 'a' ; ba <= 'z' ; ba++)
	{
		if (ba != 'e' && ba != 'q')
		{
			putchar(ba);
		}
	}
	putchar('\n');
	return (0);
}
