#include <stdio.h>
/**
 * main - entry point
 *
 * function main - a program that prints all the numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
