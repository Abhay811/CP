#include "../temp.h"

int strstr(string s, string x)
{
    //Your code here
    if (x.empty())
        return 0;
    if (s.find(x) != string::npos)
        return s.find(x);

    return -1;
}