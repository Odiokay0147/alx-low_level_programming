#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: variable to the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
