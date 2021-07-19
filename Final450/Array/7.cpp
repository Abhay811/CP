#include "temp.h"

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
        mx = mx > a[i] ? mx : a[i], mn = mn < a[i] ? mn : a[i];
    cout << mx << " " << mn;

}