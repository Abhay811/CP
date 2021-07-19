#include "temp.h"

bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_set<int> t;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];

        if (s == 0 || t.find(s) != t.end())
            return true;
        t.insert(s);
    }
    return false;
}