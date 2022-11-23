#include<stdio.h>
/**
 * main - entry point
 *
 * function main - a program that prints all
 * possible different combinations of two
 * digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int f;
	int l;

	for (f = 10; f <= 19; f++)
	{
		for (l = 10; l <= 19; l++)
		{
			if ((l % 10) > (f % 10))
			{
				putchar((f % 10) + '0');
				putchar((l % 10) + '0');
				if (f != 18 || l != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
