#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a{{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};
    vector<vector<int>> s;
    for (int i = 0; i < a[0].size(); i++)
    {
        vector<int> v;
        for (int j = 0; j < a.size(); j++)
            v.emplace_back(a[j][i]);
        reverse(v.begin(), v.end());
        s.push_back(v);
    }
    for (auto r : s)
        for (auto c : r)
            cout << c << " ";
}