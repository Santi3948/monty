#include "monty.h"
/**
 * fstruc - function of struct
 * @j: int pos the struct
 * Return: struct
 */
instruction_t fstruc(int j)
{
instruction_t artype[] = {
	{"push", push_},
	{"pall", pall_},
	{"pint", pint_},
	{"pop", pop_},
	{"swap", swap_},
	{"add", add_},
	{"nop", nop_},
	{NULL, NULL}
};
	return (artype[j]);
}
