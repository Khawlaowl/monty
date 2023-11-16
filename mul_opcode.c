#include "monty.h"

/**
 * mul - Multiplies the top two elements of the stack.
 *
 * This function multiplies the integer value of the top element by the
 * second element of the stack. If the stack is empty or contains only
 * one element, it calls the mul_error function to handle the error.
 *
 * @stack: Ptr to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		mul_error(line_number);
	}

	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}

/**
 * mul_error - Handle error when attempting to multiply in a too-short stack.
 *
 * This function is called when an attempt is made to multiply in a stack
 * that contains fewer than two elements. It prints an error message
 * indicating the line number and exits the program with a failure status.
 *
 * @line_number: The line number from the Monty file where the error occurred.
 */
void mul_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
