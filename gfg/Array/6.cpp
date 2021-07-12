#include "../temp.h"

// Rearrange Array Alternately

void rearrange(long long *arr, int n)
{

    // Your code here
    int indmx = n - 1, indmn = 0;
    int max_ele = arr[n - 1] + 1;
    for (int i = 0; i < n; i++)
        if (i & 1)
        {
            arr[i] += (arr[indmn] % max_ele) * max_ele;
            indmn++;
        }
        else
        {
            arr[i] += (arr[indmx] % max_ele) * max_ele;
            indmx--;
        }
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_ele;
}