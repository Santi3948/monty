#include "monty.h"
/**
 * isnumber - verify if a string is a number
 * @str: the string
 * Return: 1 if it's a number or 0 if it's not
 */
int isnumber(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
	i++;
	}
	return (1);
}
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the list
 * @n: the number in the new node
 * Return: the list with the new node
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *aux = malloc(sizeof(stack_t));

	if (!aux)
		return (NULL);
	aux->next = NULL;
	aux->prev = NULL;
	aux->n = n;
	if (*head)
	{
		(*head)->prev = aux;
		aux->next = *head;
		(*head) = aux;
	}
	else
		(*head) = aux;
	return (*head);
}
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @list: the list
 * Return: the number of nodes
 */
void print_dlistint(stack_t **list)
{
	size_t i;
	stack_t *aux = *list;

	for (i = 0; aux; i++)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
