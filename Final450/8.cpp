#include "temp.h"

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    sort(a.begin(), a.end());
    cout << a[k - 1] << " " << a[n - k];
}