#include "main.h"

/**
 * print_alphabet_x10 - print abc * 10
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	char b, m;

	for (b = '0'; b <= '9'; b++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
