0x1B. C - Sorting algorithms & Big O
This repository contains C programs that implement various sorting algorithms to sort arrays of integers in ascending order.

0. Bubble Sort
File: 0-bubble_sort.c

Function: void bubble_sort(int *array, size_t size);

Description: This function sorts an array of integers using the Bubble Sort algorithm. The algorithm repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. It continues this process until the array is sorted in ascending order.

Time Complexity (Big O Notation):

Best Case: O(n)
Average Case: O(n^2)
Worst Case: O(n^2)
1. Insertion Sort
File: 1-insertion_sort_list.c

Function: void insertion_sort_list(listint_t **list);

Description: This function sorts a doubly linked list of integers using the Insertion Sort algorithm. The algorithm builds the sorted list one element at a time by iteratively inserting each element into its correct position in the sorted portion of the list.

Time Complexity (Big O Notation):

Best Case: O(n)
Average Case: O(n^2)
Worst Case: O(n^2)
2. Selection Sort
File: 2-selection_sort.c

Function: void selection_sort(int *array, size_t size);

Description: This function sorts an array of integers using the Selection Sort algorithm. The algorithm divides the input array into two parts: the sorted part at the left end and the unsorted part at the right end. It repeatedly finds the smallest element in the unsorted part and swaps it with the leftmost element in the unsorted part to expand the sorted portion.

Time Complexity (Big O Notation):

Best Case: O(n^2)
Average Case: O(n^2)
Worst Case: O(n^2)
3. Quick Sort
File: 3-quick_sort.c

Function: void quick_sort(int *array, size_t size);

Description: This function sorts an array of integers using the Quick Sort algorithm with the Lomuto partition scheme. The algorithm selects a pivot element and rearranges the array elements such that all elements smaller than the pivot are on the left, and all elements greater than the pivot are on the right. It then recursively applies the same process to the left and right partitions.

Time Complexity (Big O Notation):

Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n^2)
Feel free to use these sorting algorithms in your projects to efficiently sort arrays and linked lists in ascending order. For more information on the time complexity analysis, refer to the respective 0-O, 1-O, and 2-O files for Bubble Sort, Insertion Sort, and Selection Sort. The 3-O file contains the time complexity analysis for Quick Sort. Happy coding! 🚀