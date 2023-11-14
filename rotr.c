#include "monty.h"

/**
 * rotr - Rotates the stack to the right.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * If the stack is not empty and has at least two elements, rotates the
 * stack to the right by moving the top element to the bottom.
 * The last element becomes the new top of the stack.
 *
 * Return: None.
 */

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

