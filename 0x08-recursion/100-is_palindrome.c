#include "main.h"
/**
 * str_recursion - function to get string
 * @s: string to get
 *
 * Return: value of string
 */
int str_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_recursion(s + 1));
}

/**
 * com_str - compare each string
 * @s: string to compare
 * @l: small iterator
 * @r: large iterator
 * Return: int
 */
int com_str(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + com_str(s, l + 1, r - 1));
	}
	return (0);
}
/**
 * is_palindrome - check palindrome string
 * @s: string to check
 *
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (com_str(s, 0, str_recursion(s) - 1));
}
