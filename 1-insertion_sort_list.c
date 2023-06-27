#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                     order using the Insertion sort algorithm.
 *
 * @list: The doubly linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	if (!list || !*list || !(*list)->next)
	return;

	listint_t *currentNode = *list;

	while (currentNode != NULL)
	{
		listint_t *prevNode = currentNode;

		/* Swap nodes until the previous node is greater than the current node */
		while (prevNode->prev != NULL && prevNode->n < prevNode->prev->n)
	{
		swapNodes(prevNode->prev, prevNode, list);
		print_list(*list);
	}

	currentNode = currentNode->next;
	}
}
