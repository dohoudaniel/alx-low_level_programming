#include <stdio.h>
/**
 * main - Entry point.
 *
 * function main - A program that prints all the numbers of base 16.
 *
 * Return: Always 0.
 */
int main(void)
{
	char he;

	for (he = '0'; he <= '9'; he++)
	{
		putchar(he);
	}
	for (he = 'a'; he <= 'f'; he++)
	{
		putchar(he);
	}
	putchar('\n');
	return (0);
}
