#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 *
 * This function prints the integer value of the top element of the stack. If
 * the stack is empty, it calls the pint_error function to handle the error.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		pint_error(line_number);
	}

	printf("%d\n", (*stack)->n);
}
