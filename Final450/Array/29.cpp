#include "../temp.h"

void solve(vector<int>& a, int k)
{
    unordered_map<int,int> m;
    for (int i = 0; i < a.size(); ++i)
        m[a[i]]++;
    int r = a.size() / k;
    for (auto it : m)
        if (it.second >= r)
            cout << it.first << " ";

}
int main()
{
    vector<int> a{3,1,2,2,1,2,3,3};
    solve(a, 4);
}