#include "monty.h"

void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    (void)line_number;

    if (*stack != NULL && (*stack)->next != NULL)
    {
        last = *stack;

        while (last->next != NULL)
            last = last->next;

        temp = last->prev;
        temp->next = NULL;
        last->prev = NULL;
        last->next = *stack;
        (*stack)->prev = last;
        *stack = last;
    }
}

