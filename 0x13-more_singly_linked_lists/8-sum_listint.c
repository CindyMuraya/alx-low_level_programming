#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer to the head of listint_t linked list
 *
 * Return: the sum of all the data (n) of a linked list, 0 if the list is empty
 *
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
