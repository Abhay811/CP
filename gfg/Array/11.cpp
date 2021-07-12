#include "../temp.h"

// Leaders in an array

vector<int> leaders(int a[], int n)
{
    // Code here

    int m = a[n - 1];
    vector<int> res;
    res.push_back(m);
    for (int i = n - 2; i >= 0; i--)
        if (a[i] >= m)
        {
            m = a[i];
            res.push_back(m);
        }
    reverse(res.begin(), res.end());
    return res;
}