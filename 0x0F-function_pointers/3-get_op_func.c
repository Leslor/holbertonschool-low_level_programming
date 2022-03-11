#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
  * get_op_func - function that selects the correct function to perform.
  * @array: ...
  * @size :  size of the array
  * @cmp: pointer to a function
  * Return: ....
  */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	for (; i < 5; i++)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
