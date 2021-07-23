#include "../temp.h"

int rowWithMax1s(vector<vector<int>> a, int n, int m)
{
    // code here
    int c, ind = INT_MIN, t = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < m; j++)
            if (a[i][j] == 1)
                c++;
        if (t < c && c != 0)
            ind = i, t = c;
    }
    if (ind >= 0)
        return ind;
    else
        return -1;
}
