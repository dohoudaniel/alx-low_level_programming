#include <"main.h">

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (y = 0; y <= 9; y++)
		{
			z = (x * y);
			if ((z / 10) > 0)
			{
				putchar((z / 10) + '0');
			}
			else
			{
				putchar(' ');
			}
			putchar((z % 10) + '0');
			if (y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return (0);
}
