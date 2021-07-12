#include "../temp.h"

// Implement Atoi

int atoi(string str)
{
    //Your code here
    int s = 0, i = 0, t = 1;
    bool flag = true;
    if (str[0] == '-')
        i = 1, t = -1;

    for (; i < str.size(); i++)
        if (str[i] > 60)
        {
            flag = false;
            break;
        }
        else
            s = s * 10 + (int)str[i] - 48;
    if (flag)
        return s * t;
    else
        return -1;
}