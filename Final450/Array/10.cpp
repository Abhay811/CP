#include "temp.h"

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int c = 0;
    for (int i = 0; i < n; i++)
        if (a[i] < 0)
        {
            if (i != c)
                swap(a[i], a[c]);
             c++;
        }
    for(auto x : a)
        cout << x << " ";
}