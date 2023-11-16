#include "monty.h"
/**
 * swap - Swaps the values of the top two elements of the stack.
 *
 * This function swaps the integer values of the top two elements of the stack.
 * If the stack is empty or contains only one element, it calls the swap_error
 * function to handle the error.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		swap_error(line_number);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
