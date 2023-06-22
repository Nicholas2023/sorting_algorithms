# Sorting Algorithms :smile:

This project implements three sorting algorithms: Bubble Sort, Insertion Sort and Selection Sort. These algorithms are used to sort arrays of integers in ascending order. The project provides implementations of these algorithms in C and includes functions to print the arrays and linked lists.

## Getting Started

To use the sorting algorithms, follow these steps:
1. Clone the repository: `git clone https://github.com/Nicholas2023/sorting_algorithms.git`
2. Compile the C files: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <algorithm-file.c> <main-file.c> print_array.c -o <output-file>`
3. Run the executable: `./<output-file>`

Replace `<algorithm-file.c>` with the filename of the sorting algorithm you want to test(e.g., `0-bubble_sort.c`, `1-insertion_sort_list.c`, `2-selection_sort.c`). Replace `<main-file.c>` with the filename of the main file provided for testing (e.g., `0-main.c`, `1-main.c`, `2-main.c`). Replace `<output-file>` with the desired name of the output executable.

## Files and Functions

The project consists of the following files:

- `<algorithm-file.c>`: Implementation of the sorting algorithm.
- `<main-file.c>`: Main function to test the sorting algorithm with sample arrays or linked lists.
- `print_array.c`: Function to print an array of integers.
- `print_list.c`: Function to print a doubly linked list of integers.
- `sort.h`: Header file containing function prototypes and struct definition.

The main files (`<main-file.c>`) include sample arrays or linked lists to demonstrate the sorting algorithms. You can modify these files or create your own to test different input cases.

## Algorithms and Time Complexity
The project includes the following sorting algorithms:

1. Bubble Sort: An algorithm that repeatedly swaps adjacent elements if they are in the wrong order.

- Time Complexity:
	Best Case: O(n)
	Average Case: O(n^2)
	Worst Case: O(n^2)
2. Insertion Sort: An algorithm that builds the final sorted array one item at a time by inserting each item into its correct position.

- Time Complexity:
	Best Case: O(n)
	Average Case: O(n^2)
	Worst Case: O(n^2)
3. Selection Sort: An algorithm that repeatedly selects the smallest element from the unsorted part of the array and swaps it with the element at the beginning.

- Time Complexity:
	Best Case: O(n^2)
	Average Case: O(n^2)
	Worst Case: O(n^2)

The time complexities mentioned above represent the number of comparisons and swaps required by the algorithms to sort the array.

## Example Usage
Here's an example of how to use the Bubble Sort algorithm:

```.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t size = sizeof(array) / sizeof(array[0]);

	print_array(array, size);
	printf("\n");
	bubble_sort(array, size);
	printf("\n");
	print_array(array, size);

	return 0;
}
```

This example demonstrates the sorting of an array using the Bubble Sort algorithm. The array is printed before and after sorting to show the intermediate steps.

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License
This project is licensed under the MIT License. You can freely use, modify, and distribute the code.

Feel free to customize the README.md file according to your project's specific requirements and add any additional information or sections as needed.
