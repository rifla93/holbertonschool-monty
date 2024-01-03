#include "monty.h"

void _push(stackt_t **stack, unsigned int line_number)
{
    stackt_t *new node = malloc(sizeof(stackt_t));
    void(line_number);
    
    if (new_ node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack =! NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}