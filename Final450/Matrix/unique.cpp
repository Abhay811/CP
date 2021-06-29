#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a{{0, 1, 0, 0, 1},
                        {1, 0, 1, 1, 0},
                        {0, 1, 0, 0, 1},
                        {1, 0, 1, 0, 0}};
    
    unordered_set <string> s;
    for (int i = 0; i < a.size(); ++i)
    {
        string str = "";
        for (int j = 0; j < a[0].size(); ++j)
            str += to_string(a[i][j]);
        if (s.count(str) == 0)
        {
            s.insert(str);
            cout << str << endl;
        }
        
    }
}
