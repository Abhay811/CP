#include "../temp.h"

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
{
    // code here
    vector<int> a;
    for (auto r : Mat)
        for (auto c : r)
            a.emplace_back(c);
    sort(a.begin(), a.end());

    int k = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            Mat[i][j] = a[k++];
    return Mat;
}