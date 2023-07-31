#ifndef LISTS_H

#define LISTS_H

#include <stdio.h>

#include <stdlib.h>

/**

* struct listint_s - single list Linked

* @n: integers

* @next: point the next node

*

* Description: single linked structure

* for singly linked list alx project

*/

typedef struct listint_s

{

int n;

struct listint_s *next;

} listint_t;

size_t print_listint(const listint_t *h);

size_t listint_len(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);

void free_listint2(listint_t **head);

int pop_listint(listint_t **head);

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

int sum_listint(listint_t *head);

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

int delete_nodeint_at_index(listint_t **head, unsigned int index);

listint_t *reverse_listint(listint_t **head);

size_t print_listint_safe(const listint_t *head);

size_t free_listint_safe(listint_t **h);

listint_t *find_listint_loop(listint_t *head);
#endif
0-print_listint.c
#include "lists.h"

/**

* print_listint - print all the linked list

* @h:  list type listint_t

*

* Return: number of num

*/

size_t print_listint(const listint_t *h)

{

size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);

}
