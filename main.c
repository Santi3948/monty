#include "monty.h"
#define UNUSED __attribute__((__unused__))
/**
 * main - Stacks, Queues - LIFO, FIFO
 * @argc: num of arguments
 * @argv: array of strings, each string is an argument
 * @env: array of strings, each string is an env variable
 * Return: Always 0
 */
int main(UNUSED int argc, char **argv, UNUSED char **env)
{
	FILE *fp;
	size_t len = 1024;
	char *line = malloc(len), *token;
	ssize_t read;
	int i = 0, line_number = 0;
	stack_t *list = malloc(sizeof(stack_t));

	tokenized = malloc(1024 * sizeof(char *)), list = NULL;
	if (!argv[1] || access(argv[1], F_OK) != 0 || argv[2])
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read = getline(&line, &len, fp);
	while (read >= 1)
	{
		i = 0;
		line_number++;
		if (read > 1)
		{
			line[read - 1] = 0, token = strtok(line, " ");
			tokenized[i] = token, i++;
			while (token)
				token = strtok(NULL, " "), tokenized[i] = token, i++;
			for (i = 0; fstruc(i).opcode; i++)
				if (tokenized[0] && !strcmp(tokenized[0], fstruc(i).opcode))
				{
					fstruc(i).f(&list, line_number);
					break;
				}
		}
		read = getline(&line, &len, fp);
	}
	return (0);
}
