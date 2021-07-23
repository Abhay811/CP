#include "../temp.h"

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i = 0, j = m - 1;
    while (i >= 0 && j >= 0 && i < n && j < m)
    {
        if (matrix[i][j] == target)
            return true;
        if (matrix[i][j] > target)
            j--;
        else
            i++;
    }
    return false;
}

int main()
{

    vector<vector<int>> a{{1, 3, 5, 7}, {10, 11, 16, 20},
                            {23, 30, 34, 60}};
    cout << searchMatrix(a, 13);
}