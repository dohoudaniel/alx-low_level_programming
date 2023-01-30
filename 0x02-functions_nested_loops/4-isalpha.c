#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic characters
 * @c: The argument
 *
 * Return: 1 if c is uppercase, lowercase or a letter
 * Return: 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
