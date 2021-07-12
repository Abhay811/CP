#include "../temp.h"

// Equilibrium point

int equilibriumPoint(long long a[], int n)
{

    // Your code here
    if (n == 1)
        return 1;
    int t = a[0];
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    int i = 1;
    while (i < n)
    {
        if (t == s - t - a[i])
            break;
        else
            t += a[i++];
    }
    if (i < n)
        return i + 1;
    else
        return -1;
}