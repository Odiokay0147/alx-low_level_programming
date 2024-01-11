#include "main.h"

/**
 * sqrt_r - return the natural square root of a number
 * @x: number
 * @y: iteration
 * Return: -1
 */
int sqrt_r(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_r(x, y + 1));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: root number
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_r(n, 0));
}
