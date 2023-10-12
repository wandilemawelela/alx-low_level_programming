#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @n: Data to add
 *
 * Return: The address of the new elemtn, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
