#include "../temp.h"

int *spirallyTraverse(int r, int c, int matrix[][c])
{
    int *v = new int[r * c];
    int m = r, n = c, i, k = 0, l = 0, j = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
            v[j++] = matrix[k][i];
        k++;
        for (i = k; i < m; i++)
            v[j++] = matrix[i][n - 1];
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
                v[j++] = matrix[m - 1][i];
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
                v[j++] = matrix[i][l];
            l++;
        }
    }
    return v;
}