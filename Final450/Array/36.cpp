#include "../temp.h"
int sb(int a[], int n, int x)
{
    // Your code goes here
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int s = 0, j = i, c = 0;
        while (s <= x && j < n)
        {
            s += a[j];
            j++;
            c++;
        }
        if (c < m && s > x)
            m = c;
        
    }
    return m;
}

int main()
{
    int a[] = {1, 4, 45, 6, 0, 19};
    cout << sb(a, 6, 51);
}