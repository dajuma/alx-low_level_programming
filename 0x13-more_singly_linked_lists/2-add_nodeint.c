#include "lists.h"

/**
 * add_nodeint - Adds node to the beginning of the list
 * @head: pointer to head pointer
 * @n: new integer to be created
 * Return: head
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (0); }
