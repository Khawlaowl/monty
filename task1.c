#include "monty.h"

/**
 * pint - Print the value at the top of the stack.
 * @head: Head of the stack.
 * @counter: Line number.
 */
void f_pint(stack_t **head, unsigned int counter)
{
	 int top_value;
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	top_value = (*head)->n;
	printf("%d\n", (*head)->n);
}
