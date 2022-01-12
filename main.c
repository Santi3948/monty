#include "monty.h"
#define UNUSED __attribute__((__unused__))
/**
 * main - Stacks, Queues - LIFO, FIFO
 * @argc: num of arguments
 * @argv: array of strings, each string is an argument
 * @env: array of strings, each string is an env variable
 * Return: Always 0
 */
int main(UNUSED int argc, UNUSED char **argv, UNUSED char **env)
{
	size_t len = 1024;
	char *line = malloc(len), *token, **tokenized = malloc(1024 * sizeof(char *));
    	ssize_t read;
	int i = 0, ln = 0, aux, add = 0;
	stack_t *list = malloc(sizeof(stack_t));
	
		read = getline(&line, &len, stdin);
		line[read - 1] = 0;
		token = strtok(line, " ");
		tokenized[i] = token;
		i++;
		while(token)
		{
			token = strtok(NULL, " ");
			tokenized[i] = token;
			i++;
		}
		i = 0;
		switch_(list, tokenized);
	return (0);
}
