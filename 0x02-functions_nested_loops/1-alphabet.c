#include "main.h"

/**
 * print_alphabet - fuction to print alphats
 *
 * Return: always returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
