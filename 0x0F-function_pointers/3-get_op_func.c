#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the use
 *
 * @s: operator passed as argument to the program
 * Return: any of 5 expected operators otherwwise NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/* initializing i */
	i = 0;
	/* s does not match any of the operators */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f); /* return operators */
}
