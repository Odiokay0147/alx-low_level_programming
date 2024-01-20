#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings and
 * point to a newly allocated space in memory
 *
 * @s1: string one
 * @s2: string two
 * @n: number of lenght
 * Return: pointer value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x, y, z;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			;
	}
	if (s2 == NULL)
		y = 0;

	else
	{
		for (y = 0; s2[y] != '\0'; y++)
			;
	}
	if (y > n)
		y = n;
	a = malloc(sizeof(char) * (x + y + 1));
	if (a == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		a[z] = s1[z];
	for (z = 0; z < y; z++)
		a[z + 1] = s2[z];
	a[x + y] = '\0';
	return (a);
}
