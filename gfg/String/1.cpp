#include "../temp.h"

// Revverse words in a given string

string reverseWords(string s)
{
    // code here
    vector<string> v;
    string str = "";
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '.')
            v.push_back(str), str = "";
        else
            str = str + s[i];
    v.push_back(str);
    str = "";
    for (int i = v.size() - 1; i >= 0; i--)
        str = str + v[i] + ".";
    str.pop_back();
    return str;
}