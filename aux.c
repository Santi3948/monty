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
/**
 * switch_ - switch
 * @list: the list
 * @tokenized: tokenized
 * @line_count: ln
 */
void switch_(stack_t **list, char **tokenized, int line_count)
{
if (tokenized[0])
{
	if (!strcmp(tokenized[0], "push"))
		push_(list, tokenized, line_count);
	else if (!strcmp(tokenized[0], "pall"))
		print_dlistint(list);
	else if (!strcmp(tokenized[0], "pint"))
		pint_(list, line_count);
	else if (!strcmp(tokenized[0], "pop"))
		pop_(list, line_count);
	else if (!strcmp(tokenized[0], "swap"))
		swap_(list, line_count);
	else if (!strcmp(tokenized[0], "add"))
		add_(list, line_count);
	else if (!strcmp(tokenized[0], "nop"))
	{};

}
}
