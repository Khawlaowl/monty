#include "monty.h"

/**
 * div_ - Divides the second element by the top element of the stack.
 *
 * This function divides the integer value of the second element by the
 * top element of the stack. If the stack is empty, contains only one
 * element, or the top element is 0, it calls the div_error function to
 * handle the error.
 *
 * @stack: Ptr to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void div_(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		div_error(line_number);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}

/**
 * div_error - Handles an error when attempting to divide in a too-short stack.
 *
 * This function is called when an attempt is made to divide in a stack
 * that contains fewer than two elements. It prints an error message
 * indicating the line number and exits the program with a failure status.
 *
 * @line_number: The line number from the Monty file where the error occurred.
 */
void div_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
