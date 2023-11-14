#include "monty.h"

void stack(stack_t **stack, unsigned int line_number)
{
    (void)line_number;
    (void)stack;
}

void queue(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    (void)line_number;

    if (*stack != NULL && (*stack)->next != NULL)
    {
        temp = *stack;

        while (temp->next != NULL)
            temp = temp->next;

        last = temp->prev;
        last->next = NULL;
        temp->prev = NULL;
        temp->next = *stack;
        (*stack)->prev = temp;
        *stack = temp;
    }
}
