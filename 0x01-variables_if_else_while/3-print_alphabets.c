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
	char dn;

	for (dn = 'a' ; dn <= 'z' ; dn++)
	{
		putchar(dn);
	}
	for (dn = 'A' ; dn <= 'Z' ; dn++)
	{
		putchar(dn);
	}
	putchar('\n');
	return (0);
}
