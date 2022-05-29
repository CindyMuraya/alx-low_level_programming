#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the head of listint_t list
 *
 * Return: The address of the node where the loop starts,
 * NULL if there is no loop
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_loop = head;
	listint_t *next_loop = head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (head == head->next)
	{
		return (head);
	}

	while (first_loop)
	{
		first_loop = first_loop->next;
		next_loop = head;
		while (first_loop && next_loop != first_loop)
		{
			if (next_loop == first_loop->next)
			{
				return (next_loop);
			}
			next_loop = next_loop->next;
		}
	}
	return (first_loop);
}
