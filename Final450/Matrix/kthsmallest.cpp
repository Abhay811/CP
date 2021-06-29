#include <bits/stdc++.h>
using namespace std;
#define MAX 4
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  vector<int> a;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        a.push_back(mat[i][j]);
    sort(a.begin(), a.end());
    for (auto c : a)
        cout << c << " ";
    return a[k - 1];
}

int main()
{
    int mat[][4] = {{15, 28, 60, 64},
                    {22, 41, 63, 91},
                    {27, 50, 87, 93},
                    {37, 78, 87, 97}};

    cout << kthSmallest(mat, 4, 3);
}