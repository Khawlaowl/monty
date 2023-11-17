#include "monty.h"

/**
 * push_error - Handle  error when the push command has an invalid argument.
 *
 * This function is called when an attempt to execute the 'push' command with
 * an invalid argument (non-integer) is encountered in the Monty file. It
 * prints an error message indicating the line number, closes the file, and
 * exits the program with a failure status.
 *
 * @line_number: The line number from the Monty file where the error occurred.
 * @file: A pointer to the Monty file being processed.
 */
void push_error(unsigned int line_number, FILE *file)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	fclose(file);
	exit(EXIT_FAILURE);
}

/**
 * pall_error - Placeholder function for handling errors during 'pall'.
 *
 * This function is intentionally designed to do nothing and serves as a
 * placeholder for handling errors during the 'pall' command. It is called
 * when an error condition related to 'pall' is detected.
 */
void pall_error(void)
{
	return; /* Do nothing */
}

/**
 * pint_error - Handle "pint" command when the stack is empty.
 *
 * This function is called when an attempt is made to execute the 'pint'
 * command on an empty stack. It prints an error message indicating the
 * line number, and exits the program with a failure status.
 *
 * @line_number: The line number where the error occurred.
 * Return: No return value; prints an error message and exits with failure
 * status.
 */
void pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
