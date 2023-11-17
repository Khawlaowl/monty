#include "monty.h"

/**
 * pop - Removes the top element from the stack.
 *
 * This function removes the top element from the stack. If the stack is empty,
 * it calls the pop_error function to handle the error.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		pop_error(line_number);
	}

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack)
	{
		(*stack)->prev = NULL;
	}
	free(temp);
}
