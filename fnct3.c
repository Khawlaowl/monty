#include "monty.h"

/**
 * pall - Prints all the elements of a stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The line number in the script (unused in this function).
 *
 * Description:
 * Prints all the integer elements in the stack starting from the top.
 * The elements are printed one per line.
 * This function is designed for debugging purposes.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
