//function
#include "temp.h"
void solve(vector<int>& a, int n)
{
    int c = a[n - 1];
    for (int i = n - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = c;
}