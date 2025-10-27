# Sorting Algorithms & Big O

This project implements various sorting algorithms in C and analyzes their time complexity using Big O notation.

## Project Structure
holbertonschool-sorting_algorithms/
sort.h # Header file with data structures and function prototypes
print_array.c # Function to print integer arrays
print_list.c # Function to print doubly linked lists
0-bubble_sort.c # Bubble sort implementation
0-O # Time complexity analysis for Bubble sort
README.md # Project documentation

## Algorithms Implemented

### 0. Bubble Sort
- **File**: `0-bubble_sort.c`
- **Prototype**: `void bubble_sort(int *array, size_t size);`
- **Time Complexity**:
  - Best case: O(n)
  - Average case: O(n²)
  - Worst case: O(n²)

**Description**: 
Bubble sort repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed.

**Features**:
- Prints the array after each swap
- Includes optimization to stop early if array is sorted
- Handles edge cases (NULL array, size < 2)

## Data Structures

### Doubly Linked List Node
```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
Compilation
All files are compiled on Ubuntu 20.04 LTS using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [source_files] -o [executable]
Example for Bubble sort:

gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
Requirements
Allowed editors: vi, vim, emacs

All files compiled on Ubuntu 20.04 LTS

Code follows Betty style guidelines

No global variables

No more than 5 functions per file

Header files include guarded

No standard library functions except where specified

Big O Notation
The project analyzes time complexity using Big O notation:

O(1) - Constant time

O(n) - Linear time

O(n²) - Quadratic time

O(log n) - Logarithmic time

O(n log n) - Linearithmic time

Testing:
You can test the algorithms with the provided main files or create your own test cases. For large datasets, consider using random number generators like Random.org.

Authors:
Alanoud Naif, Reef Saeed Alqahtani - Holberton School Students

License:
This project is part of the Holberton School curriculum.

This README provides:

1. **Clear project overview** and structure
2. **Detailed algorithm documentation** with time complexity
3. **Compilation instructions**
4. **Project requirements**
5. **Big O notation explanation**
6. **Testing guidelines**
7. **Professional formatting**
