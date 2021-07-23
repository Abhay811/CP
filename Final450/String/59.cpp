#include "../temp.h"

bool rot(string str1, string str2)
{
    if (str1.size() != str2.size())
        return false;
    string str = str1 + str1;
    return (str.find(str2) != string::npos);
}