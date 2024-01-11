#include "main.h"
/**
 * prime_n - calculate prime number
 * @x: number
 * @y: divided number
 * Return: 0
 */
int prime_n(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_n(x, y + 1));
}
/**
 * is_prime_number - function that returns 1  if the input integer is a
 * prime number
 * @n: prime number
 * Return: 1
 */
int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
