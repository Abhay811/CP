#include "temp.h"

int getPairsCount(int arr[], int n, int k)
{
    // code here
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c += m[k - arr[i]];
        if (k - arr[i] == arr[i])
            c--;
    }
    return c / 2;
}