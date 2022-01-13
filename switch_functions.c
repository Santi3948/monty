#include "monty.h"
/**
 * push_ - adds a new node to a list
 * @stack: the list
 * @line_number: ln
 */
void push_(stack_t **stack, unsigned int line_number)
{
	if (tokenized[1] && isnumber(tokenized[1]))
		add_dnodeint(stack, atoi(tokenized[1]));
	else
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
/**
 * pint_ - print the first node of the list
 * @stack: the list
 * @line_number: ln
 */
void pint_(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		fprintf(stderr, "L<%d>: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * pop_ - removes the top element of the stack.
 * @stack: the list
 * @line_number: ln
 */
void pop_(stack_t **stack, unsigned int line_number)
{
	if (delete_dnodeint_at_index(stack, 0) == -1)
	{
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
/**
 * swap_ - swaps the top two elements of the stack.
 * @stack: the list
 * @line_number: ln
 */
void swap_(stack_t **stack, unsigned int line_number)
{
	int aux;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L<%d>: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	aux = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = aux;
}
/**
 * add_ - adds the top two elements of the stack.
 * @stack: the list
 * @line_number: ln
 */
void add_(stack_t **stack, unsigned int line_number)
{
if (!(*stack) || !(*stack)->next)
{
	fprintf(stderr, "L<%d>: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
(*stack)->next->n = (*stack)->next->n + (*stack)->n;
delete_dnodeint_at_index(stack, 0);
}
