#include "monty.h"

/**
 * pop_coderr - Handles an error when attempting to pop from an empty stack.
 *
 * This function is called when an attempt is made to pop an element from an
 * empty stack. It prints an error message indicating the line number and
 * exits the program with a failure status.
 *
 * @ln_number: The line number from the Monty file where the error occurred.
 */
void pop_coderr(unsigned int ln_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", ln_number);
	exit(EXIT_FAILURE);
}

/**
 * swap_coderr - Handle an error when attempt to swap element in a short stack
 *
 * This function is called when an attempt is made to swap elements in a stack
 * that contains fewer than two elements. It prints an error message indicating
 * the line number and exits the program with a failure status.
 *
 * @ln_number: The line number from the Monty file where the error occurred.
 */
void swap_coderr(unsigned int ln_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", ln_number);
	exit(EXIT_FAILURE);
}

/**
 * add_coderr - Handle error when attempt to add elements in short stack
 *
 * This function is called when an attempt is made to add elements in a stack
 * that contains fewer than two elements. It prints an error message indicating
 * the line number and exits the program with a failure status.
 *
 * @ln_number: The line number from the Monty file where the error occurred.
 */
void add_coderr(unsigned int ln_number)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", ln_number);
	exit(EXIT_FAILURE);
}

/**
 * malloc_coderr - Handles an error when memory allocation (malloc) fails.
 *
 * This function is called when an attempt to allocate memory using malloc
 * fails. It prints an error message indicating the failure and exits the
 * program with a failure status.
 */
void malloc_coderr(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
