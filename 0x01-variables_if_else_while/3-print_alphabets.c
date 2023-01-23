#include <stdio.h>
/**
 * main - Entry point
 *
 * function main - Prints the Alphabets alternatively
 *
 * Return: Always 0
 */
int main(void)
{
	char dan;

	for (dan = 'a' ; dan <= 'z' ; dan++)
	{
		putchar(dan);
	}
	for (dan = 'A' ; dan <= 'Z' ; dan++)
	{
		putchar(dan);
	}
	putchar('\n');
	return (0);
}
