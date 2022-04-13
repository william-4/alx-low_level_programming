#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  *get_op_func - function selects the correct function to perform operation
  *@s: operator character
  *
  *Return: correct function result is successful and NULL if not
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
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
