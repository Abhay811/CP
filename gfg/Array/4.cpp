#include "../temp.h"

int MissingNumber(vector<int> &array, int n)
{
    // Your code goes here
    int x = 0, x2;
    for (auto it : array)
        x ^= it;
    int r = n % 4;
    if (r == 0)
        x2 = n;
    else if (r == 1)
        x2 = 1;
    else if (r == 2)
        x2 = n + 1;
    else
        x2 = 0;

    int t = x ^ x2;
    return t;
}