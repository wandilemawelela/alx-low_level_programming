#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  * Return: the address of the new element, or NULL if it failed
  * @head: A pointer to the listint_t list.
  * @n: Data
  *
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* new node */

	new_node = malloc(sizeof(listint_t)); /* allocate memory for the new node */

	if (new_node == NULL) /* if the allocation failed */
		return (NULL);
	new_node->n = n; /* assign the data (n) to the new node */
	new_node->next = *head; /* assign the next node to the new node */
	*head = new_node; /* assign the new node to the head */
	return (new_node); /* return the new node */
}
