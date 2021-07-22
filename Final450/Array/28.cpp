#include "temp.h"

long long maxProduct(int *arr, int n)
{
    // code here
    if (n == 1)
        return arr[0];
    long long m1, m2, m = 0;
    m1 = m2 = 1;
    long long s = 1;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            m1 = m1 * arr[i];
            m2 = min(m2 * arr[i], s);
            flag = 1;
        }
        else if (arr[i] == 0)
            m1 = m2 = 1;
        else
        {
            long long t = m1;
            m1 = max(arr[i] * m2, s);
            m2 = t * arr[i];
        }

        if (m < m1)
        {
            m = m1;
        }
    }
    if (!flag && m == 0)
        return 0;
    return m;
}