#include "../temp.h"
int findLongestConseqSubseq(int arr[], int N)
{
    //Your code here
    int m = 0;
    vector<int> a(100001, 0);
    for (int i = 0; i < N; i++)
        a[arr[i]] = 1;

    for (int i = 0; i < 100001; i++)
        if (a[i] == i)
        {
            int c = 0;
            while (a[i] == i)
                c++, i++;

            if (c > m)
                m = c;
            i--;
        }
    return m;
}