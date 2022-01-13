#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
size_t dlistint_len(const stack_t *h);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
void push_(stack_t **list, char **tokenized, int line_count);
void pint_(stack_t **list, int line_count);
void pop_(stack_t **list, int line_count);
void swap_(stack_t **list, int line_count);
void add_(stack_t **list, int line_count);
int isnumber(char *str);
stack_t *add_dnodeint(stack_t **head, const int n);
void print_dlistint(stack_t **list);
void switch_(stack_t **list, char **tokenized, int line_count);
ssize_t getline(char **x, size_t *y, FILE *file);
#endif
