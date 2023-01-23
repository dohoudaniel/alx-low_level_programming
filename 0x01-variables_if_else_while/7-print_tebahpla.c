#include <stdio.h>
/**
 * main - Entry point.
 *
 * function name - Prints the alphabets in reverse.
 *
 * Return: 0
 */
int main(void)
{
	char dM;

	for (dM = 'z'; dM >= 'a'; dM--)
	{
		putchar(dM);
	}
	putchar('\n');
	return (0);
}
