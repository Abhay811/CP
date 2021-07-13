#include "../temp.h"

// Subarray with given sum

vector<int> subarraySum(int arr[], int n, int s)
{
    // Your code here
    int t = 0;
    int i = 0, j = 0;
    int flag = 0;
    while (i <= n)
    {
        if (s == t)
        {
            flag = 1;
            break;
        }
        if (s > t)
            t += arr[j], j++;
        else if (s < t)
            i++, j = i, t = 0;
    }
    vector<int> a;
    if (flag)
        a.push_back(i + 1), a.push_back(j);
    else
        a.push_back(-1);
    return a;
}