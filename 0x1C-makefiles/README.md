# 0x1C. C - Makefiles
In this project, we have implemented a make file.

![BigO_img](https://i.ytimg.com/vi/_r7i5X0rXJk/maxresdefault.jpg)

## Requirements

* OS: Ubuntu 20.04 LTS
* Version of gcc: 9.3.0
* Version of make: GNU Make 4.2.1

## Big O complexity in differents sorting algorithms:

![BigO_complexity](https://www.bigocheatsheet.com/img/big-o-cheat-sheet-poster.png)

## Helper Files :raised_hands:

* [print_array.c](./print_array.c): C function that prints an array of
integers. Provided by Holberton School.
* [print_list.c](./print_list.c): C function that prints a `listint_t`
doubly-linked list. Provided by Holberton School.

## Header Files :file_folder:

* [sort.h](./sort.h): Header file containing definitions and prototypes for
all types and functions written for the project.

Data Structure:
```
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
```

Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);`     |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);`   |
| `3-quick_sort.c`           | `void quick_sort(int *array, size_t size);`       |
| `100-shell_sort.c`         | `void shell_sort(int *array, size_t size);`       |
| `101-cocktail_sort_list.c` | `void cocktail_sort_list(listint_t **list);`      |
| `102-counting_sort.c`      | `void counting_sort(int *array, size_t size);`    |
| `103-merge_sort.c`         | `void merge_sort(int *array, size_t size);`       |
| `104-heap_sort.c`          | `void heap_sort(int *array, size_t size);`        |
| `105-radix_sort.c`         | `void radix_sort(int *array, size_t size);`       |
| `106-bitonic_sort.c`       | `void bitonic_sort(int *array, size_t size);`     |
| `107-quick_sort_hoare.c`   | `void quick_sort_hoare(int *array, size_t size);` |
