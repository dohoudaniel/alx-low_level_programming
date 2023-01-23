#include<stdio.h>
/**
 * main - entry point
 *
 * main - Prints a combination of three digits
 *
 * Return: 0
 */
int main(void)
{
	int A;
	int B;
	int C;

	for (A = 0; A <= 9; A++)
	{
		for (B = 0; B <= 9; B++)
		{
			for (C = 0; C <= 9; C++)
			{
			if (C > B && B > A)
			{
				putchar(A + '0');
				putchar(B + '0');
				putchar(C + '0');
				if (A != 7 || B != 8 || C != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
