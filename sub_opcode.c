#include "monty.h"

/**
 * _sub - subtracts the top element from the second top
 * @queues: double pointer to the stack
 * @line_number: line number in the file
 */
void _sub(stack_t **queues, unsigned int line_number)
{
	int value;
	stack_t *temp;

	if (*queues == NULL || (*queues)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *queues;
	value = temp->next->h - temp->h;
	temp->next->h = value;
	*queues = temp->next;
	free(temp);
}
