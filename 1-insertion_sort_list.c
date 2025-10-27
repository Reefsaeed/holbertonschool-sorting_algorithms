#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list using Insertion sort
* @list: Double pointer to the head of the linked list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insert, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;

while (current != NULL)
{
insert = current;
current = current->next;

while (insert->prev != NULL && insert->n < insert->prev->n)
{
/* Swap nodes */
temp = insert->prev;

/* Update the next pointers */
if (temp->prev != NULL)
temp->prev->next = insert;
else
*list = insert;

if (insert->next != NULL)
insert->next->prev = temp;

/* Swap the nodes */
temp->next = insert->next;
insert->prev = temp->prev;
temp->prev = insert;
insert->next = temp;

/* Print list after swap */
print_list(*list);
}
}
}
