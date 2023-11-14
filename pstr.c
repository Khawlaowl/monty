#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack.
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * Uses the values on the stack to print the corresponding ASCII characters.
 * Continues printing characters until it encounters a null byte (0),
 *   a non-printable ASCII character, or the end of the stack.
 *
 * Return: None.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL && current->n != 0 &&
			(current->n >= 0 && current->n <= 127))
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
