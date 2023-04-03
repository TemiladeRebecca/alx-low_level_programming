#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at a given index
* of a listint_t linked list
* @head: double pointer to the head of the listint_t linked list
* @index: the index of the node that should be deleted
* Return: 1 if it succeeds, or
* -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = *head, *tmp;

	if (!current_node)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);

		return (1);
	}

	while (current_node->next && ((i + 1) != index))
	{
		current_node = current_node->next;
		i++;
	}

	if ((i + 1) == index && current_node->next)
	{
		tmp = current_node->next;
		current_node->next = tmp->next;
		free(tmp);

		return (1);
	}

	return (-1);
}
