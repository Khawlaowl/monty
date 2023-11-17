#include "monty.h"

/**
 * mod - Compute remainder of division of second element by the top element
 *
 * This function computes the remainder of the integer division of the second
 * element by the top element of the stack. If the stack is empty, contains
 * only one element, or the top element is 0, it calls the mod_error function
 * to handle the error.
 *
 * @stack: Ptr to the pointer to the stack's top node.
 * @line_number: Line number from the Monty file.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		mod_error(line_number);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}

/**
 * mod_error - Handle error on mod to a too short stack.
 *
 * @line_number: Line number where the error occurred.
 * Return: No return value; exits with failure status.
 */
void mod_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
