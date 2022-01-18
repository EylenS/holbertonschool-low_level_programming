#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located. f value is not
 * present in array or if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t idx;

    if (array != NULL)
    {
        for(idx = 0; idx < size; idx++)
        {
            printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
            if (array[idx] == value)
                return (idx);
        }
        return (-1);
    }
    else
        return (-1);
}
