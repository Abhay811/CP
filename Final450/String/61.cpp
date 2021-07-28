#include "../temp.h"

int main()
{
    string x = "XY";
    string y = "123";
    string res = "XY312";

    if (x.size() + y.size() != res.size())
    {
        cout << "false";
        return 0;
    }
    sort(x.begin(), x.end());
    sort (y.begin(), y.end());
    sort(res.begin(), res.end());

    int i, j, k;
    i = j = k = 0;
    while (k != res.length())
    {
        if (i < x.length() && x[i] == res[k])
            i++;
        else if (j < y.length() && y[j] == res[k])
            j++;
        else
        {
            cout << "false";
            return 0;
        }
        k++;
    }
    if (i < x.length() || j < y.length())
        cout << "false";
    else
        cout << "True";
}