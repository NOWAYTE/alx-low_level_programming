#include "function_pointers.h"
/**
 * get_op_func - A function tat selects the correct function
 * to perform the operation
 * @s: operator passed as argument
 */
int (*get_op_func(char *s)(int, int))
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

	for (i = 0; i < != NULL; i++)
	{
	}
