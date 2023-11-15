#include "monty.h"

/**
 * pchar - Prints the character at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * Checks if the stack is empty.
 * If empty, prints an error message and exits the program.
 * Checks if the value at the top of the stack is within the valid ASCII range.
 * If not, prints an error message and exits the program.
 * Prints the character corresponding to the value at the top of the stack.
 * Return: None.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	
	
	if (!current)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

if (current->n > 127 || current->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
	putchar('\n');
}
