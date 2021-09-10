// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void find(int arr[], int n, int x)
{
    vector<int> a(2, 0);
    int f = lower_bound(arr, arr + n, x) - arr;
    int l = upper_bound(arr, arr + n, x) - arr -1;
    if (l < f)
        f = l = -1;
    cout << f << " " << l << endl;
   

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
