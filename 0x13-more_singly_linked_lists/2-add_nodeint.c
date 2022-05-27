#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the head of listint_t list
 * @n: integer of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *head;
	listint_t *new;
	size_t n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
