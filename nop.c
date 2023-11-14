#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * This function is a no-operation (nop) and does nothing.
 * It take in the stack pointer and the current line number but doesn't perform
 * any operations on the stack. It is used to represent an instruction that has
 * no effect.
 *
 * Return: None.
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
