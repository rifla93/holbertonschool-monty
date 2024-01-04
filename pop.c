#include "monty.h"

void _pop(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	stack_t *tmp = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
}