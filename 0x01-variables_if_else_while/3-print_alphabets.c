#include <stdio.h>
/**
 * main - Entry point
 *
 * function main - prints alphabets alternatively
 *
 * Return: 0
 */
int main(void)
{
	char dn;

	for (dn = 'a' ; dn <= 'z' ; dn++)
	{
		putchar(dn);
	}
	putchar('\n');
	return (0);
}
