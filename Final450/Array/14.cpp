#include "temp.h"

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int c = abs(arr[n - 1] - arr[0]);
    int mn, mx;
    for (int i = 1; i < n; i++)
    {
        mx = max(abs(arr[i - 1] + k), abs(arr[n - 1] - k));
        mn = min(abs(arr[0] + k), abs(arr[i] - k));
        c = min(c, mx - mn);
    }
    return c;
}