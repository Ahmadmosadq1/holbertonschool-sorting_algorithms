#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sorting using insersion sort
 *
 * description: it uses the insertion sorting
 * @list: list to be sorted
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;
	listint_t *key_node;
	listint_t *print_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		key_node = current;
		current = current->next;
		while (key_node->prev != NULL && key_node->n < key_node->prev->n)
		{
			temp = key_node->prev;
			key_node->prev = temp->prev;
			temp->next = key_node->next;
			if (key_node->next != NULL)
				key_node->next->prev = temp;
			if (temp->prev != NULL)
				temp->prev->next = key_node;
			else
				*list = key_node;
			key_node->next = temp;
			temp->prev = key_node;
			print_node = *list;
			while (print_node != NULL)
			{
				printf("%d", print_node->n);
				if (print_node->next != NULL)
					printf(", ");
				print_node = print_node->next;
			}
			printf("\n");
		}
	}
}
