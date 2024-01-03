#include "monty.h"
/**
 * get_function - function that bridges _printf to custom function
 * @c: -holds value of input
 * Return: (combo[i].print)
 */

void (*get_function(*f))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t combo[] = {
		{"push", _push},
		{"pull", _pall},
		{NULL, NULL}
	};
	while (combo[i].opcode)
	{
		if (combo[i].opcode[0] == c)
			return (combo[i].f);
		i++;
	}
	return (NULL);
}