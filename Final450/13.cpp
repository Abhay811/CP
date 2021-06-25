// function
// Kadane's algo
#include "temp.h"
int solve(vector<int>& a, int n)
{
    int m = INT_MIN, s = 0;
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