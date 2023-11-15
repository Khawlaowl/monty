#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: A pointer to the top of the stack.
 * @counter: The current line number in the Monty file.
 *
 * Description:
 * Checks if the stack has at least two elements.
 * If not, prints an error message and exits the program.
 * Adds the values of the top two elements and updates the result.
 * Removes the top element from the stack.
 *
 * Return: None.
 */
void add(stack_t **stack, unsigned int counter)
{
stack_t *current = *stack;
int len = 0, sum;

while (current)
{
current = current->next;
len++;
}

if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

current = *stack;
sum = current->n + current->next->n;
current->next->n = sum;
*stack = current->next;
free(current);
}
