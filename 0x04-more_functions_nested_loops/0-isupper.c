#include <ctype.h>

/**
 * _isupper - check if char is in uppercase.
 * Return: 1 if c isupper, otherwise 0.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
