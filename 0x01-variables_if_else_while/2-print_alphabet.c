#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 * function main - Lists alphabets a to z
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
