#include "../temp.h"

// Anagram

bool isAnagram(string a, string b)
{

    // Your code here
    if (a.size() != b.size())
        return false;
    int size = a.size();
    vector<int> v(26, 0), v2(26, 0);

    for (int i = 0; i < size; i++)
        v[a[i] - 97]++;
    for (int i = 0; i < size; i++)
        v2[b[i] - 97]++;

    for (int i = 0; i < 26; i++)
        if (v[i] != v2[i])
            return false;
    return true;
}