#include "monty.h"

/**
 * pint_func - Prints the value at the top of the stack.
 *
 * This function prints the integer value of the top element of the stack. If
 * the stack is empty, it calls the pint_error function to handle the error.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @ln_number: The line number from the Monty file.
 */
void pint_func(stack_t **stack, unsigned int ln_number)
{
	if (!stack || !*stack)
	{
		pint_error(ln_number);
	}

	printf("%d\n", (*stack)->n);
}
