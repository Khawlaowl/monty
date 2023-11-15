#include "monty.h"

/**
 * f_push - Pushes a new node with the given value onto the stack.
 * @stack: A pointer to the top of the stack.
 * @value: The value to be pushed onto the stack.
 *
 * Description:
 * - Allocates a new node and assigns the given value to it.
 * - Updates the pointers to link the new node to the stack.
 * If the stack is not empty, updates the previous node's pointer.
 * Finally, updates the stack pointer to point to the new node.
 *
 * Return: None.
 */
void push(stack_t **stack, int value, int mode, unsigned int counter) {
    if (mode == QUEUE_MODE) {
        // Add logic for queue mode, if needed
        fprintf(stderr, "L%d: Queue mode not supported in push function\n", counter);
        exit(EXIT_FAILURE);
    }

    if (value < 0 || value > 9) {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        exit(EXIT_FAILURE);
    }

    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL) {
        (*stack)->prev = new_node;
}

*stack = new_node;
}
