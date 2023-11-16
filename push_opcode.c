#include "monty.h"

/**
 * push_func - Pushes a new node onto the stack.
 *
 * This function create a new node with the given line_number and add it
 * to the top of the stack. If memory allocation fail
 * and returns without modifying the stack.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @ln_number: The line number from the Monty file.
 */
void push_func(stack_t **stack, unsigned int ln_number)
{

	stack_t *create_node = malloc(sizeof(stack_t));

	if (create_node == NULL)
	{
		malloc_error();
		return;
	}

	create_node->n = ln_number;
	create_node->prev = NULL;
	create_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = create_node;
	}

	*stack = create_node;
}
