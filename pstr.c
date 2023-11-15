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
stack_t *current;
int value;

current = *stack;

while (current && current->n != 0 && isascii(current->n))
{
value = current->n;
putchar(value);
current = current->next;
}
if (!current || current->n == 0)
putchar('\n');
*stack = current;
}
