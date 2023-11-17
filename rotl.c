#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: double pointer to the head of the stack
 * @counter: unused parameter (for consistency with opcode function signature)
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
<<<<<<< HEAD
stack_t *last;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
last= *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = *head;
(*head)->prev = last;
*head = (*head)->next;
(*head)->prev = NULL;
last->next->next = NULL;
=======
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	stack_t *last;
	last= *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = *head;
	(*head)->prev = last;
	*head = (*head)->next;
	(*head)->prev = NULL;
	last->next->next = NULL;
>>>>>>> 47a0ec24ceca51997d95c98e33aa7b7cbd662a76
}
