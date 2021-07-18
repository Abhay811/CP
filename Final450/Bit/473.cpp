#include "temp.h"

vector<int> singleNumber(vector<int> nums)
{
    // Code here.
    vector<int> res;
    int x = 0;
    for (auto it : nums)
        x ^= it;
    int x2, y;
    x2 = y = 0;
    int set_no = x & ~(x - 1);
    for (auto it : nums)
        if (it & set_no)
            x2 ^= it;
        else
            y ^= it;
    if (x2 > y)
        res.push_back(y), res.push_back(x2);
    else
        res.push_back(x2), res.push_back(y);
    return res;
}