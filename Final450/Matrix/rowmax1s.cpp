#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int c, ind = 0, t = 0;
	    
        for (int i = 0; i < n; i++)
        {
            c = 0;
            for (int j = 0; j < m; j++)
                if (a[i][j] == 1)
                    c++;
            if (t < c && c != 0)
                ind = i, t = c;
        }
    
    cout << ind << endl;
}