#include "../temp.h"

// Last index of One

int lastIndex(string s)
{
    int i = s.size(), flag = 0;
    for (; i >= 0; i--)
        if (s[i] == '1')
        {
            flag = 1;
            break;
        }
    if (flag)
        return i;
    else
        return -1;
}