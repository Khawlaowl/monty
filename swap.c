#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * - Checks if the stack has at least two elements.
 * - If not, prints an error message and exits the program.
 * - Swaps the top two elements of the stack by rearranging the pointers.
 *
 * Return: None.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->prev = (*stack)->prev;
	(*stack)->prev = temp;
	temp->next = *stack;

	if (temp->prev != NULL)
		temp->prev->next = temp;

	*stack = temp;
}
