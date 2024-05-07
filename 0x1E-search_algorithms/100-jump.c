#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * jump_search - jump seach algo
 * @array: array to be searched
 * @size: size of the array
 * @value: the value we lookin for
 * Return: the index if found
*/
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
        return a;
}

int jump_search(int *array, size_t size, int value)
{
    int step = sqrt(size);
    unsigned int next, prev;

    if(array == NULL)
        return -1;
    next = 0;
    while(array[next] < value)
    {
        printf("Value checked array[%d] = [%d]\n", next, array[next]);
        prev = next;
        next += step;
        if(next == size || next > size)
        {
            break;
        }
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, next);
    while(prev <= next)
    {
         printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if(array[prev] == value)
            return prev;
        if(prev >= size - 1)
            break;
        prev++;
    }

    return -1;
}
