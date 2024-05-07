#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - function that does linear search
 * @array: array to be searched
 * @size: size of the array
 * @value: is the value we lookin for
 * 
 * Return: an int
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    if (array == NULL)
        return -1;

    for(i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}