#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 15;
	b = 57;
	c = 44;
	
	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}

