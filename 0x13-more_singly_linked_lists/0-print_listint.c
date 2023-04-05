#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: number of (nodes)elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
    {
        printf("%d\n", h->n);
        h = h->n;
        nodes++;
    }
    return (nodes);
}
