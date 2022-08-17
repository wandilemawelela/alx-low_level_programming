#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * Return: the address of the new element, or NULL if it failed
  * @head: A pointer to the list_t list.
  * @n:
  *
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* new_node is the new node, temp is the current node */
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t)); /* allocate memory for the new node */

	if (new_node == NULL) /* if the memory allocation failed */
		return (NULL);

	new_node->n = n;  /* assign the data to the new node */
	new_node->next = NULL;  /* assign the next node to NULL */

	if (*head == NULL)
	{
		*head = new_node; /* if the list is empty, assign the new node to the head */
		return (new_node); /* return the new node */
	}

	temp = *head; /* temp is the current node */
	while (temp->next != NULL) /* while the next node is not NULL */
		temp = temp->next; /* moves to the next node */
	temp->next = new_node; /* assign the new node to the next node */
	return (new_node);
}
