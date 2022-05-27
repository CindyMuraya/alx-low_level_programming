#include "lists.c"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the head of listint_t linked list
 *
 * Desc: This function can print lists with a loop
 * You should go through the list only once
 *
 * Return: the number of nodes in the list, else exit with status 98
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (counter);
}
