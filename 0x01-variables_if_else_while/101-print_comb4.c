#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 1; n < 4; n++)
	{
	for (m = 2; m < 4; n++)
	{
	for (l = 3; l < 4; l++)
	{
	if (l > m && m > n)
	{
	putchar(n);
	putchar(m);
	putchar(l);
	if (n != 8 || m != 9)
	{
	putchar(',');
        putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
