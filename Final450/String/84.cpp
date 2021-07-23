#include "../temp.h"

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}
string secFrequent(string arr[], int n)
{
    //code here.
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    int f = INT_MIN, s = INT_MIN;

    for (auto it : m)
        if (it.second > f)
            s = f, f = it.second;
        else if (it. second > s && it.second != f)
            s = it.second;
    for (auto it : m)
        if (it.second == s)
            return it.first;
    return NULL;
}

int main()
{
    string arr[] = {"aaa", "bbb", "ccc", "bbb", "aaa", "aaa"};
    cout << secFrequent(arr, 6);
}