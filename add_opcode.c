#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 *
 * This function adds the integer values of the top two elements of the stack.
 * If the stack is empty or contains only one element, it calls the add_error
 * function to handle the error. The result is placed at the top of the stack,
 * and the original top element is removed.
 *
 * @stack: A pointer to the pointer to the stack's top node.
 * @line_number: The line number from the Monty file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		add_error(line_number);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

/**
 * is_valid_integer - Checks if a string represents a valid integer.
 *
 * This func checks whether the given string represent  valid integer
 * It allows an optional sign at the beginning and verifies that remain
 * characters are digits.
 *
 * @str: The input string to be checked.
 * Return: 1 if the string is a valid integer, 0 otherwise.
 */
int is_valid_integer(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;

	if (*str == '\0')
		return (0);

	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}

	return (1);
}
