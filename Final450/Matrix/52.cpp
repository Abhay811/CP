#include "../temp.h"
#define MAX 100
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    //Your code here
    vector<int> a;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a.push_back(mat[i][j]);
    sort(a.begin(), a.end());

    return a[k - 1];
}
