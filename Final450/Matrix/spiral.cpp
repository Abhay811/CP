#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> s{{10, 20, 30, 40},
                            {15, 25, 35, 45},
                            {27, 29, 37, 48},
                            {32, 33, 39, 50}};
    int m = 4, n = 4;
    int i, k = 0, l = 0;

    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
            cout << s[k][i] << " ";
        k++;
        for (i = k; i < m; i++)
            cout << s[i][n - 1] << " ";
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
                cout << s[m - 1][i] << " ";
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
                cout << s[i][l] << " ";
            l++;
        }
    }
}