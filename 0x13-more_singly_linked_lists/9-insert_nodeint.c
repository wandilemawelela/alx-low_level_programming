#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: A pointer to the list_t list.
  * @idx: index of the list where the new node should be added.
  * Index starts at 0
  * @n: Data
  * if it is not possible to add the new node at index idx, do
  * not add the new node and return NULL
  * Return: the address of the new node, or NULL if it failed
  *
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node; /* new node */
	listint_t *temp; /* temporary node */
	unsigned int i; /* counter */

	if (head == NULL) /* if the list is empty */
		return (NULL);

	if (idx == 0) /* if the index is 0 */
	{
		new_node = malloc(sizeof(listint_t)); /* allocate memory for the new node */

		if (new_node == NULL) /* if the allocation failed */
			return (NULL);
		new_node->n = n; /* assign the data (n) to the new node */
		new_node->next = *head; /* assign the next node to the new node */
		*head = new_node; /* assign the new node to the head */
		return (new_node); /* return the new node */
	}
	temp = *head; /* temporary node */

	for (i = 0; i < idx - 1; i++) /* loop through the list */
	{
		if (temp->next == NULL) /* if the index is out of bounds */
			return (NULL);
		temp = temp->next; /* move to the next node */
	}
	new_node = malloc(sizeof(listint_t)); /* allocate memory for the new node */

	if (new_node == NULL) /* if the allocation failed */
		return (NULL);
	new_node->n = n; /* assign the data (n) to the new node */
	new_node->next = temp->next; /* assign the next node to the new node */
	temp->next = new_node; /* assign the new node to the next node */
	return (new_node); /* return the new node */
}
