#include <stdio.h>

/*
 * main - Prints the program name, followed by a new line
 * @argc - Prints the number of arguments used
 * @argv - An array of pointers to the arguments used
 *
 * Return: always 0
 */

int main(int  __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return 0;
}
