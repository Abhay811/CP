//function

#include "temp.h"

void solve(vector<int>& a, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
        {
            if (i != c)
                swap(a[i], a[c]);
             c++;
        }
    for(auto x : a)
        cout << x << " ";
}