// C program to implement above approach

#include <stdio.h>
#include <stdlib.h>

// Structure to make a pair
typedef struct
{
    int value, index;
} pair;

// Function to compare pairs
int cmp_pair(const void* a, const void* b)
{
    return ((*(pair*)a).value
            - (*(pair*)b).value);
}

pair* aux_arr;

// Function to make auxiliary array
void make_aux_array(int arr[], int n)
{
    aux_arr = (pair*)malloc(n * sizeof(pair));

    // For every element in array
    // write elements and
    // their indices in auxiliary array
    for (int i = 0; i < n; i++)
    {
        aux_arr[i].value = arr[i];
        aux_arr[i].index = i;
    }

    // Sort auxiliary array.
    qsort(aux_arr, n, sizeof(pair),
          cmp_pair);
}

// Function to implement binary search
int binarySearch(int arr[], int n, int x)
{
    // For given value x perform Binary Search
    // on sorted auxiliary array.
    // Let position be the index where
    // element x is in auxiliary array.
    pair key = { x, 0 };
    pair* found = (pair*)bsearch(
                      &key, aux_arr, n, sizeof(pair), cmp_pair);
    if (found != NULL)
    {
        int position = found - aux_arr;

        // Return index of element
        // in original array arr
        // (aux_array[position].second).
        return aux_arr[position].index;
    }
    else
    {
        return -1;
    }
}

// Driver code
int main()
{
    int arr[] = { 15, 12, 13, 19, 11,
                  10, 18, 17, 14, 16};
    int x = 18;
    int n = sizeof(arr) / sizeof(arr[0]);
    make_aux_array(arr, n);

    // Function call
    int result = binarySearch(arr, n, x);
    printf("%d\n", result);
    return 0;
}
