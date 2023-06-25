#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * merge - Merges two sorted subarrays into one sorted array
 * @array: Pointer to the original array
 * @left: Pointer to the left subarray
 * @l_size: Size of the left subarray
 * @right: Pointer to the right subarray
 * @r_size: Size of the right subarray
 */

void merge(int *array, int *left, size_t l_size, int *right, size_t r_size)
{
	size_t i = 0, j = 0, k = 0;
	int *temp = malloc((l_size + r_size) * sizeof(int));

	if (temp == NULL)
		return;
	printf("Merging...\n");
	printf("[left]: ");
	print_array(left, l_size);
	printf("[right]: ");
	print_array(right, r_size);

	while (i < l_size && j < r_size)
	{
		if (left[i] <= right[j])
			temp[k++] = left[i++];
		else
			temp[k++] = right[j++];
	}

	while (i < l_size)
		temp[k++] = left[i++];

	while (j < r_size)
		temp[k++] = right[j++];

	for (i = 0; i < l_size + r_size; i++)
		array[i] = temp[i];
	printf("[Done]: ");
	print_array(array, l_size + r_size);
	free(temp);
}


/**
 * merge_sort_recursive - Recursive function for merge sort
 * @array: Pointer to the array to be sorted
 * @temp: Temporary array for merging
 * @s: Starting index of the subarray
 * @e: Ending index of the subarray
 */

void merge_sort_recursive(int *array, int *temp, size_t s, size_t e)
{
	size_t m;

	if (s >= e)
		return;

	m = s + (e - s) / 2;

	merge_sort_recursive(array, temp, s, m);
	merge_sort_recursive(array, temp, m + 1, e);

	merge(array + s, array + s, m - s + 1, array + m + 1, e - m);
}

/**
 * merge_sort - Sorts an array of integers in ascending order
 * using the Merge sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */

void merge_sort(int *array, size_t size)
{
	int *temp;

	if (array == NULL || size < 2)
		return;

	temp = malloc(size * sizeof(int));
	if (temp == NULL)
		return;

	merge_sort_recursive(array, temp, 0, size - 1);

	free(temp);
}
