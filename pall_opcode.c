#include "monty.h"

/**
 * pall_func - Prints all the elements of the stack.
 *
 * This function prints the integer data of all nodes in the stack, starting
 * from the top. The line_number parameter is not used in this function.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @ln_number: Unused parameter (required by Monty file parsing).
 */
void pall_func(stack_t **stack, unsigned int ln_number)
{
	stack_t *topical = *stack;

	(void)ln_number;

	while (topical)
	{
		printf("%d\n", topical->n);
		topical = topical->next;
	}
}
