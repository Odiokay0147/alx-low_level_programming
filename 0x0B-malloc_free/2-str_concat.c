#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return:pointer to the newly allocated space in
 * memory which contains the contents of the strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, x, y;
	char *point;

		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}

		l1 = 0;
		while (s1[l1] != '\0')
		{
			l1++;
		}
		l2 = 0;
		while (s2[l2] != '\0')
		{
			l2++;
		}

		point = malloc(sizeof(char) * (l1 + l2 + 1));
		if (point == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < l1; x++)
		{
			point[x] = s1[x];
		}
		for (y = 0; y <= l2; y++)
		{
			point[x] = s2[y];
			x++;
		}
		return (point);
}
