#include "sort.h"

/**
* lomuto_partition - Partitions array using Lomuto scheme
* @array: The array to partition
* @low: Starting index
* @high: Ending index
* @size: Size of the array
*
* Return: Partition index
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j, temp;

for (j = low; j <= high - 1; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
/* Swap elements */
temp = array[i];
array[i] = array[j];
array[j] = temp;
/* Print array after swap */
print_array(array, size);
}
}
}

/* Place pivot in correct position */
if (i + 1 != high)
{
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
}

return (i + 1);
}

/**
* quick_sort_recursive - Recursive function for Quick sort
* @array: The array to sort
* @low: Starting index
* @high: Ending index
* @size: Size of the array
*/
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pi = lomuto_partition(array, low, high, size);

/* Recursively sort elements before and after partition */
quick_sort_recursive(array, low, pi - 1, size);
quick_sort_recursive(array, pi + 1, high, size);
}
}

/**
* quick_sort - Sorts an array of integers using Quick sort (Lomuto)
* @array: The array to be sorted
* @size: Number of elements in the array
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}
