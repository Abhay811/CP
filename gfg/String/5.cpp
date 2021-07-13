#include "../temp.h"

// check if two string is rotated by two places
bool isRotated(string str1, string str2)
{
    // Your code here
    if (str1.size() != str2.size())
        return false;
    int size = str1.size();
    string t = str1;
    t = str1[str1.size() - 1] + t;
    t = str1[str1.size() - 2] + t;
    t.pop_back();
    t.pop_back();
    str1 = str1 + str1[0];
    str1 = str1 + str1[1];
    str1.erase(str1.begin(), str1.begin() + 2);

    bool flag = true, flag2 = true;
    for (int i = 0; i < size; i++)
        if (str1[i] != str2[i])
        {
            flag = false;
            break;
        }
    for (int i = 0; i < size; i++)
        if (t[i] != str2[i])
        {
            flag2 = false;
            break;
        }
    if (flag || flag2)
        return true;
    else
        return false;
}