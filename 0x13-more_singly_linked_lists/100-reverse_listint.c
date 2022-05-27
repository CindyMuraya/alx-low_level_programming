#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to the head of a listint_t linked list
 *
 * Return: a pointer to the first node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	previous = NULL;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	(*head)->next = previous;

	return (*head);
}
