#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 * Return: pointer to the duplicate string otherwise print 0
 */
char *_strdup(char *str)
{
	unsigned int o, k;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}

	o = 0;
	while (str[o] != '\0')
	{
		o++;
	}

	strd = (char *)malloc(sizeof(char) * (o + 1));
	if (strd == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= o; k++)
	{
		strd[k] = str[k];
	}
	return (strd);
}
