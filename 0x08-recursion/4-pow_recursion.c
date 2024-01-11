#include "main.h"

/**
 * _pow_recursion - function that returns the value of raised to power
 * @x: number
 * @y: power of y
 *
 * Return: y, but if less than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
