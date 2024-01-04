#include "monty.h"
/**
 * get_function - function that bridges _printf to custom function
 * @c: -holds value of input
 * Return: (combo[i].print)
 */

void (*get_function(char opcode))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t combo[] = {
		{"push", _push},
		{"pull", _pall},
		{NULL, NULL}
	};
	while (combo[i].opcode)
	{
		if (strcmp(combo[i].opcode), opcode == 0)
			return (combo[i].f);
		i++;
	}
	return (NULL);
}