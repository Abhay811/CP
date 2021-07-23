#include "../temp.h"

int isPlaindrome(string s)
{
    // Your code goes here
    int size = s.size() - 1;
    for (int i = 0; i <= size; i++)
        if (s[i] != s[size - i])
            return 0;
    return 1;
}