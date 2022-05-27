#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to the head of listint_t list
 *
 * Desc: The function sets the head to NULL. This function can free lists
 * with a loop.
 *
 * Return: the size of the list that was freed
 *
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
