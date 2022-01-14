#include "monty.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the list
 */
void free_dlistint(stack_t *head)
{
	stack_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
