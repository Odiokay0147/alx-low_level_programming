#include <stdio.h>

/**
 * main - Prints the sum of all multiples if 3 or 5 up to 1024
 * Return: ALways (Success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
	If ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	z++;
	}
	printf("%d\n", z);
	return (0);

}
