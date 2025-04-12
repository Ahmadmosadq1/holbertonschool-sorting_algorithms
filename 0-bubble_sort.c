#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Entry point
 * desciption: sort the elemnts in assending order
 * @array: pointer to array
 * @size: array size
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
