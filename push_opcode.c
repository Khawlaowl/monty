#include "monty.h"

/**
 * push_func - Pushes a new node onto the stack.
 *
 * This function create a new node with the given line_number and add it
 * to the top of the stack. If memory allocation fail
 * and returns without modifying the stack.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void push(stack_t **stack, unsigned int line_number)
{

	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		malloc_error();
		return;
	}

	new_node->n = line_number;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}
