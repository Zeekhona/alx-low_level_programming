#include "lists.h"

/**
* listint_len - returns all the linked list elements
* @h: linked  listint_t
*
* Return: num
*/

size_t listint_len(const listint_t *h)

{

size_t num = 0;

while (h)

{

num++;

h = h->next;

}

return (num);

}
