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
	int fm;
	int bm;

	for (fm = 10; fm <= 19; fm++)
	{
		for (bm = 10; bm <= 19; bm++)
		{
			if ((bm % 10) > (fm % 10))
			{
				putchar((fm % 10) + '0');
				putchar((bm % 10) + '0');
				if (fm != 18 || bm != 19)
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
