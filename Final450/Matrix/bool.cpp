#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a{{1, 0, 0, 1},
                            {0, 0, 1, 0},
                            {0, 0, 0, 0}};
    vector<int> r(a.size(), 0), c(a[0].size());
    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a[0].size(); j++)
            if (a[i][j] == 1)
                r[i] = 1, c[j] = 1;

    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < a[0].size(); j++)
            if (r[i] == 1 || c[j] == 1)
                a[i][j] = 1;
    
    for (auto x : a)
    {
        for (auto c : x)
            cout << c << " ";
        cout << endl;
    }
}