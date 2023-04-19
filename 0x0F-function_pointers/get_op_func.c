#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * the operation that the user wants.
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int itr = 0;

	while (operations[itr].op != NULL && *(operations[itr].op) != *s)
	{
		itr++;
	}

	return (operations[itr].f);
}
