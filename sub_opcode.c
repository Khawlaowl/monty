#include "monty.h"
/**
 * sub - Subtracts the top element from the second element of the stack.
 *
 * This function subtracts the integer value of the top element from
 * the second element of the stack. If the stack is empty or contains
 * only one element, it calls the sub_error function to handle the error.
 *
 * @stack: Ptr to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		sub_error(line_number);
	}

	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
