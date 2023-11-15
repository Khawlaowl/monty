#include "monty.h"

/**
 * stack - Sets the format of the data to a stack (LIFO).
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * The function is placeholder for setting the format of data to a stack LIFO
 * It take in the stack pointer and the current line number but doesn't perform
 * any operations on the stack. It is used to represent an instruction that
 * sets the format of the data to a stack.
 *
 * Return: None.
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
	bus.lifi = 0;
}

/**
 * queue - Sets the format of the data to a queue (FIFO).
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * If the stack is not empty and has at least two elements, sets the format
 * of the data to a queue (FIFO) by moving the top element to the bottom.
 * The second element becomes the new top of the stack.
 *
 * Return: None.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *last;

	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = *stack;

		while (temp->next != NULL)
			temp = temp->next;

		last = temp->prev;
		last->next = NULL;
		temp->prev = NULL;
		temp->next = *stack;
		(*stack)->prev = temp;
		*stack = temp;
	}
}
