#include "../temp.h"

// Largest Number formed from an Array

static int comp(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx) > 0 ? 1 : 0;
}
string printLargest(vector<string> &arr)
{
    // code here
    sort(arr.begin(), arr.end(), comp);
    string str = "";
    for (int i = 0; i < arr.size(); i++)
        str += arr[i];
    return str;
}