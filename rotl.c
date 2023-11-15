#include "monty.h"

/**
 * rotl - Rotates the stack to the left.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * If the stack is not empty and has at least two elements, rotates the
 * stack to the left by moving the top element to the bottom.
 * The second element becomes the new top of the stack.
 *
 * Return: None.
 */

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
