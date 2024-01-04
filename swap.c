#include "monty.h"

void _swap(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp;
    if (!(*stack) || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    tmp = (*stack)->next;
    if ((*stack)->next->next)
        (*stack)->next->next = *stack;
    (*stack)->next = tmp->next;
    tmp->next = *stack;
    *stack = tmp;
}
