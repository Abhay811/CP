#include "../temp.h"

long long findMinDiff(vector<long long> a, long long n, long long m)
{

    sort(a.begin(), a.end());
    long long s = abs(a[0] - a[m - 1]);
    for (int i = 1; i <= n - m; i++)
        if (s > a[i + m - 1] - a[i])
            s = a[i + m - 1] - a[i];
    return s;
}