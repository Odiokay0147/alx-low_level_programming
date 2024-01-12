#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments passed to program
 * @argv: array of strings
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
