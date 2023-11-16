#include "monty.h"

/**
 * pop_error - Handles an error when attempting to pop from an empty stack.
 *
 * This function is called when an attempt is made to pop an element from an
 * empty stack. It prints an error message indicating the line number and
 * exits the program with a failure status.
 *
 * @line_number: The line number from the Monty file where the error occurred.
 */
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - Handle an error when attempt to swap element in a short stack
 *
 * This function is called when an attempt is made to swap elements in a stack
 * that contains fewer than two elements. It prints an error message indicating
 * the line number and exits the program with a failure status.
 *
 * @line_number: The line number from the Monty file where the error occurred.
 */
void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * add_error - Handle error when attempt to add elements in short stack
 *
 * This function is called when an attempt is made to add elements in a stack
 * that contains fewer than two elements. It prints an error message indicating
 * the line number and exits the program with a failure status.
 *
 * @line_number: The line number from the Monty file where the error occurred.
 */
void add_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - Handles an error when memory allocation (malloc) fails.
 *
 * This function is called when an attempt to allocate memory using malloc
 * fails. It prints an error message indicating the failure and exits the
 * program with a failure status.
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
