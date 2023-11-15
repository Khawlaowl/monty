#include "monty.h"

/**
 * push - Pushes a new node with the given value onto the stack.
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
