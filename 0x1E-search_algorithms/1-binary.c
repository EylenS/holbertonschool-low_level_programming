#include "search_algos.h"

/**
 * printArray - prints an array of integers
 * @array:  is a pointer to the first element of the array to be printed
 * @start: index to start
 * @end: index to end
 */
void printArray(const int *array, size_t start, size_t end)
{
	size_t idx;

	idx = start;
	while (array && idx <= end)
	{
		if (idx > start)
			printf(", ");
		printf("%d", array[idx]);
		idx++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * the array is sorted in ascending order
 * @size: is the number of elements in array
 * @value: is the value to search for, which won’t appear more than
 * once in array
 * Return: the index where value is located. If value is not present in
 * array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, start = 0;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		printArray(array, start, end);
		mid = start + (end - start) / 2;
		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
