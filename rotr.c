#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: double pointer to the head of the stack
 * @counter: unused parameter (for consistency with opcode function signature)
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *last, *new_head;

if (*head == NULL || (*head)->next == NULL)
return;

last = *head;
while (last->next)
last = last->next;
new_head = last->prev;
new_head->next = NULL;

last->next = *head;
last->prev = NULL;
(*head)->prev = last;
(*head) = last;
}
