#include "monty.h"
/**
 * push_ - adds a new node to a list
 * @list: the list
 * @tokenized: the number in the list
 * @line_count: ln
 */
void push_(stack_t **list, char **tokenized, int line_count)
{
	if (tokenized[1] && isnumber(tokenized[1]))
		add_dnodeint(list, atoi(tokenized[1]));
	else
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}
}
/**
 * pint_ - print the first node of the list
 * @list: the list
 * @line_count: ln
 */
void pint_(stack_t **list, int line_count)
{
	if (!(*list))
	{
		fprintf(stderr, "L<%d>: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*list)->n);
}
/**
 * pop_ - removes the top element of the stack.
 * @list: the list
 * @line_count: ln
 */
void pop_(stack_t **list, int line_count)
{
	if (delete_dnodeint_at_index(list, 0) == -1)
	{
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}
}
/**
 * swap_ - swaps the top two elements of the stack.
 * @list: the list
 * @line_count: ln
 */
void swap_(stack_t **list, int line_count)
{
	int aux;

	if (!(*list) || !(*list)->next)
	{
		fprintf(stderr, "L<%d>: can't swap, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}
	aux = (*list)->n;
	(*list)->n = (*list)->next->n;
	(*list)->next->n = aux;
}
/**
 * add_ - adds the top two elements of the stack.
 * @list: the list
 * @line_count: ln
 */
void add_(stack_t **list, int line_count)
{
if (!(*list) || !(*list)->next)
{
	fprintf(stderr, "L<%d>: can't add, stack too short\n", line_count);
	exit(EXIT_FAILURE);
}
(*list)->next->n = (*list)->next->n + (*list)->n;
delete_dnodeint_at_index(list, 0);
}
