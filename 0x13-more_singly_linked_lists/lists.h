#ifndef LIST_H
#define LIST_H

/*
* Desc: header file containing prototypes and definitions
*	for all functions and types written in this project.
*/

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
