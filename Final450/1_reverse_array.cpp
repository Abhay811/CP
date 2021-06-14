// Reverse array

#include "temp.h"

int main()
{
    fast;
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a)
        cin >> x;
    
    fori(0, n / 2)
        h_swap(&a[i], &a[n - i - 1]);

    for (auto x : a)
        cout << x << " ";

}