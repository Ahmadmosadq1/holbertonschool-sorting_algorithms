#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*Bubble sort*/
void bubble_sort(int *array, size_t size);

/* Insertion algorithm methods */
void insertion_sort_list(listint_t **list);
void swap(listint_t **list, listint_t *head);
void swap_at_head(listint_t **head, listint_t *start_node,
				  listint_t *swap_node);

/* Selection sort */
void selection_sort(int *array, size_t size);

/* Quicksort algorithm methods: Lomuto partition scheme*/
void quick_sort(int *array, size_t size);
void quicksort(int *array, int start, int end, size_t size);
int partition_array(int *array, int start, int end, size_t size);

/* Quicksort algorithm methods: Hoare's partition scheme*/
void quick_sort_hoare(int *array, size_t size);
void quicksort_hoare(int *array, int start, int end, size_t size);
int partition_array_hoare(int *array, int start, int end, size_t size);

/* shell sort - knuth sequence */
void shell_sort(int *array, size_t size);

/* cocktail sort*/
void cocktail_sort_list(listint_t **list);

/* counting sort */
void counting_sort(int *array, size_t size);

/* merge sort */
void merge_sort(int *array, size_t size);

/** heap sort */
void heap_sort(int *array, size_t size);

/** bitonic sort */
void bitonic_sort(int *array, size_t size);
/** radix sort */
void radix_sort(int *array, size_t size);
#endif /* SORT_H */
