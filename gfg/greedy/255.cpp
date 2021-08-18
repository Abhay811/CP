#include <bits/stdc++.h>
using namespace std;

int maxSumDifference(vector<int> &a, int n)
{
    vector<int> seq;
    sort(a.begin(), a.end());

    for (int i = 0; i < n / 2; i++)
        seq.push_back(a[i]), seq.push_back(a[n - i - 1]);
    
    if (n & 1)
        seq.push_back(a[n / 2]);
    
    int m = 0;
    for (int i = 0; i < n - 1; i++)
        m = m + abs(seq[i] - seq[i + 1]);
    
    m = m + abs(seq[n - 1] - seq[0]);
    return m;
}