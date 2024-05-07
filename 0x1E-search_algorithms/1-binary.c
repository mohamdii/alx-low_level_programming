#include "search_algos.h"
#include <stdio.h>
/**
 * prin - function prints array
 * @array: array to be printed
 * @left: left of index
 * @right: index
*/
void prin(int *array, size_t left, size_t right)
{
    unsigned int i;

    printf("Searching in array: ");
    for(i = left; i < right; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[right]);
}
/**
 * binary_search - function that does binary
 * @array: array to be searched
 * @size: size of the array
 * @value: the value searched
 * 
 * Return: returns index of int type
*/
int binary_search(int *array, size_t size, int value)
{
    int mid, low, high;

    if(array == NULL || size == 0)
        return -1;
    low = 0;
    high = size - 1;
    while(low <= high)
    {
        prin(array, low, high);
        mid = (low + high) / 2;
        if(array[mid] == value)
        {
            return mid;
        }
        if(value > array[mid])
        {
            low = mid + 1;
        }
        else
            high = mid + 1;
    }
    return -1;
}
