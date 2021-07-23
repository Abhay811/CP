#include "../temp.h"

void print(string str)
{
    map<char, int> c;
    for (int i = 0; i < str.size(); i++)
        c[str[i]]++;
    
    for (auto it: c)
        if (it.second > 1)
            cout << it.first;
}