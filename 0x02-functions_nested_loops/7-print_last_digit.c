#include "main.h"

/**
 * print_last_digit - print last digit of a num
 *
 * @n: The integer to be used
 *
 * Return: The last digit of int
 */
int print_last_digit(int b)
{
	int t = b % 10;

	if (t < 0)
		t *= -1;

	_putchar(t + '0');

	return (t);
}
