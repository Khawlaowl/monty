#include "monty.h"

/**
 * pall - Prints all the elements of the stack.
 *
 * This function prints the integer data of all nodes in the stack, starting
 * from the top. The line_number parameter is not used in this function.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @line_number: Unused parameter (required by Monty file parsing).
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *topical = *stack;

	(void)line_number;

	while (topical)
	{
		printf("%d\n", topical->n);
		topical = topical->next;
	}
}
