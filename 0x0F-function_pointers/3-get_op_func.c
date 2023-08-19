#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - get the func for op
 * @s: string to pass
 *
 * Return: ptr to op function
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

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s && *ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
