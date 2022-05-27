#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t list
 * @h: pointer to listint_t list
 *
 * Return: number of elements in a linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
