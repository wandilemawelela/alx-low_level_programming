#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a
  * listint_t linked list.
  * @index: the index of the node that should be deleted. Index starts at 0
  * @head: A pointer to the listint_t list.
  * Return: 1 if it succeeded, -1 if it failed
  *
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp; /* temporary node */
	listint_t *prev; /* previous node */
	unsigned int i; /* counter */

	if (head == NULL) /* if the list is empty */
		return (-1);
	if (index == 0) /* if the index is 0 */
	{
		temp = *head; /* temporary node */
		*head = temp->next; /* assign the next node to the head */
		free(temp); /* free the temporary node */
		return (1);
	}

	temp = *head; /* temporary node */

	for (i = 0; i < index - 1; i++) /* loop through the list */
	{
		if (temp->next == NULL) /* if the index is out of bounds */
			return (-1);
		temp = temp->next; /* move to the next node */
	}
	prev = temp; /* previous node */
	temp = temp->next; /* temporary node */
	prev->next = temp->next; /* assign the next node to the previous node */
	free(temp); /* free the temporary node */
	return (1);
}
