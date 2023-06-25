#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * heapify - Performs the heapify operation on a subtree rooted at 'root'.
 * @arr: The array to be heapified.
 * @size: The size of the array.
 * @root: The index of the root of the subtree.
 */

void heapify(int arr[], size_t size, size_t root)
{
	size_t largest = root;
	size_t left = 2 * root + 1;
	size_t right = 2 * root + 2;

	if (left < size && arr[left] > arr[largest])
		largest = left;

	if (right < size && arr[right] > arr[largest])
		largest = right;

	if (largest != root)
	{
		swap(&arr[root], &arr[largest]);
		print_array(arr, size);
		heapify(arr, size, largest);
	}
}


/**
 * heap_sort - Sorts an array of integers in ascending
 * order using the Heap sort algorithm.
 * @arr: The array to be sorted.
 * @size: The size of the array.
 */

void heap_sort(int arr[], size_t size)
{
	int i;

	/* Build max heap */
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(arr, size, i);

	/* Perform heap sort */
	for (i = size - 1; i > 0; i--)
	{
		swap(&arr[0], &arr[i]);
		print_array(arr, size);
		heapify(arr, i, 0);
	}
}
