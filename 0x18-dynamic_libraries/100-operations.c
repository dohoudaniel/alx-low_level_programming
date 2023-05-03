#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * add - A function that adds two numbers.
 *
 * Return: Added numbers.
 */
int add(int a,int b)
{
	addition = a + b;
	return (addition);
}

/**
 * sub - A function that subtracts between two numbers.
 *
 * Return: Difference in two numbers.
 */
int sub(int a, int b)
{
	difference = a - b;
	return (difference);
}

/**
 * mul - A function that multiplies two numbers
 *
 * Return: Product of two numbers
 */
int mul(int a, int b)
{
	product = (int) a * b; /* Typecasting */
	return (product);
}

/**
 * div - A function that divides a number by another.
 *
 * Return: Quotient of numbers.
 */
int div(int a, int b)
{
	quotient = (int) a / b; /* Typecasting */
	return (quotient);
}

/**
 * mod - A function that calculates the modulo of two integers.
 *
 * Return: Modulo.
 */
int mod(int a, int b)
{
	modulo = (int) a % b;
	return (modulo);
}