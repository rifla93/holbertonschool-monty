#include "monty.h"

void _push(stack_t **stack, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    (void)line_number;

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = 3;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}
