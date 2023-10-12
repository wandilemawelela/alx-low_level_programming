#include "lists.h"

/**
 * GetNewNode - Creates a new node from the heap
 * @x: Int value
 *
 * Return: Address of the new node
 *
 */

struct dlistint_s *GetNewNode(int x)
{
	struct dlistint_s *newNode;

	newNode = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	newNode->n = x;
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode);
}


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
	struct dlistint_s *newNode = GetNewNode(n);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
