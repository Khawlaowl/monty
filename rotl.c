#include "monty.h"

void rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    (void)line_number;

    if (*stack != NULL && (*stack)->next != NULL)
    {
        temp = *stack;
        last = *stack;

        while (last->next != NULL)
            last = last->next;

        last->next = temp;
        temp->prev = last;
        *stack = temp->next;
        (*stack)->prev = NULL;
        temp->next = NULL;
    }
}

