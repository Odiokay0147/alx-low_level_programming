#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments passed to program
 * @argv: array of strings
 *
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
