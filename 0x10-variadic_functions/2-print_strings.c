#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list point_str;

	va_start(point_str, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(point_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(point_str);
}
