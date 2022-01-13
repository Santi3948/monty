#include "monty.h"
/**
 * pall_ - pall
 * @stack: stack
 * @line_number: ln
 */
void pall_(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	print_dlistint(stack);
}
/**
 * nop_ - pall
 * @stack: stack
 * @line_number: ln
 */
void nop_(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
}
