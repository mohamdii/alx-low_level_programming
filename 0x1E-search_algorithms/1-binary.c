#include "search_algos.h"
#include <stdio.h>
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
    int i, mid, low, high;
    size_t j;

    if(array == NULL || size == 0)
        return -1;
    low = 0;
    high = size - 1;
    printf("Searching in array: ");
    for(j = 0; j < size; j++)
    {
        if(j == size - 1)
        {
            printf("%d\n", array[j]);
            break;
        }
        printf("%d, ", array[j]);
    }
    while(low <= high)
    {
        printf("Searching in array: ");
        mid = (low + high) / 2;
        for(i = 0; i < mid; i++)
        {

            if(i == mid - 1)
            {
                printf("%d\n", array[i]);
                break;
            }
            printf("%d, ", array[i]);
        }
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
