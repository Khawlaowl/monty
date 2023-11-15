#include "monty.h"

/**
 * mod - Computes modulo of second top element of the stack by top element
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description:
 * - Checks if the stack has at least two elements.
 * - If not, prints an error message and exits the program.
 * - Checks if the top element is zero to avoid division by zero.
 * - If zero, prints an error message and exits the program.
 * - Computes the modulo of the second top element by the top element.
 * - Removes the top element from the stack.
 *
 * Return: None.
 */
void mod(stack_t **stack, unsigned int line_number)
{
stack_t *current;
int length = 0, result;

current = *stack;

while (current)
{
current = current->next;
length++;
}

if (length < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}

current = *stack;

if (current->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
result = current->next->n % current->n;
current->next->n = result;
*stack = current->next;
free(current);
}
