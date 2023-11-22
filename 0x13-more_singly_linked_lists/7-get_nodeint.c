#include "lists.h"
/**
 * get_nodeint_at_index - retreives a node at an index
 * @head: pointer to the first element
 * @index: node desired position
 * Return: pointer to the retreived node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;

	for (t = 0; t < index; t++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
