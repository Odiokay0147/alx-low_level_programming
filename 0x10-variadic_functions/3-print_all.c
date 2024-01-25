#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x, y;

	char *str;
	va_list dis;

	va_start(dis, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'i':
				printf("%d", va_arg(dis, int));
				y = 0;
				break;
			case 'c':
				printf("%c", va_arg(dis, int));
				y = 0;
				break;
			case 'f':
				printf("%f", va_arg(dis, double));
				y = 0;
				break;
			case 's':
				str = va_arg(dis, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				y = 0;
				break;
			default:
				y = 1;
				break;
		}
		if (format[x + 1] != '\0' && y == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(dis);
}
