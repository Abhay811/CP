#include "../temp.h"

// Kadane's Algo
int maxSubarraySum(int a[], int n)
{

    // Your code here
    int s = 0;
    int m = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        if (m < s)
            m = s;
        if (s < 0)
            s = 0;
    }
    return m;
}