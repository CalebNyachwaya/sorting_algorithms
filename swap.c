#include "sort.h"

/**
 * swapNodes - Swaps two nodes in a doubly linked list.
 *
 * @node_b: The first node to be swapped.
 * @node_c: The second node to be swapped.
 * @list: The doubly linked list.
 */
void swapNodes(listint_t *node_b, listint_t *node_c, listint_t **list)
{
	listint_t *node_a, *node_d;

	if (node_b == NULL || node_c == NULL)
	return;

	/* Verify that nodes point somewhere */
	node_a = node_b->prev;
	node_d = node_c->next;

	/* Update previous nodes' next pointers */
	if (node_a != NULL)
	node_a->next = node_c;

	/* Update next nodes' previous pointers */
	if (node_d != NULL)
	node_d->prev = node_b;

	/* Swap node pointers */
	node_c->next = node_b;
	node_b->next = node_d;
	node_b->prev = node_c;
	node_c->prev = node_a;

	if (node_b == *list)
	*list = node_c;
}

