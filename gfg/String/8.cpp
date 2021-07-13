#include "temp.h"

// Remove Duplicate

string removeDups(string S)
{
    // Your code goes here
    string str = "";
    vector<int> s(26, 0);
    for (int i = 0; i < S.size(); i++)
        if (s[S[i] - 97] == 0)
            str = str + S[i], s[S[i] - 97]++;

    return str;
}