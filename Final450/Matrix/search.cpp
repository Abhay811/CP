// search a element in sorted matrix of rows and columns


#include <bits/stdc++.h>
using namespace std;
#define N 4
#define INF INT_MAX
void youngify(vector<vector<int>>& s, int i, int j)
{
    int l = i + 1 < N ? s[i + 1][j] : INF;
    int r = j + 1 < N ? s[i][j + 1] : INF;
    if (l == INF && r == INF)
        return;
    if (l < r)
    {
        s[i][j] = l;
        s[i + 1][j] = INF;
        cout << i + 1 << ", " << j << endl;
        youngify(s, i + 1, j);

    }
    else 
    {
        s[i][j] = r;
        s[i][j + 1] = INF;
        cout << i << ", " << j + 1 << endl;
        youngify(s, i, j + 1);
    } 
}
int extractMin(vector<vector<int>>& s)
{
    int ret = s[0][0];
    s[0][0] = INF;
    youngify(s, 0, 0);
    return ret;
}
int main()
{
    vector<vector<int>> s{{10, 20, 30, 40},
                            {15, 25, 35, 45},
                            {27, 29, 37, 48},
                            {32, 33, 39, 50}};
    int n = 4, m = 4, ele = 29;
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (s[i][j] == ele)
        {
            cout << i << ", " << j << endl;
            break;
        }
        else if (s[i][j] > ele)
            j--;
        else
            i++;
    }
    for (int i = 0; i < N * N; i++)
        cout << extractMin(s) << " "; 
}