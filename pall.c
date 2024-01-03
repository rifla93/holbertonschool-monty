#include "monty.h"

void _pall(stackt_t **stack, unsigned int line_number)
{
    (void)line_number;
    stackt_t *temp = *stack;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}