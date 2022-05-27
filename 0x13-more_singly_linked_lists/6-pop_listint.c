#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: pointer to the head of listint_t linked list
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int m;

	if (*head == NULL)
	{
		return (0);
	}

	tp = *head;
	m = (*head)->n;
	*head = (*head)->next;

	free(tp);
	return (m);
}
