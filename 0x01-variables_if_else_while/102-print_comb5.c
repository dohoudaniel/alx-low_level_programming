#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int b, i, k, j;

	for (b = 48; b <= 57; b++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (b + i) &&  k >= b) || b < k)
					{
						putchar(b);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (b + i + k + j == 227 && b == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

