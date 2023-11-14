#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }

    temp = (*stack)->next;
    (*stack)->next = temp->next;
    temp->prev = (*stack)->prev;
    (*stack)->prev = temp;
    temp->next = *stack;

    if (temp->prev != NULL)
        temp->prev->next = temp;

    *stack = temp;
}

