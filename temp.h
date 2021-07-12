// template 

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<int> vs;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp(x, y)    make_pair(x, y)
#define eb(x)       emplace_back(x)
#define pb(x)       push_back(x)
#define fi          first
#define se          second
#define sz(x)       x.size()
#define all(x)      x.begin(), x.end()
#define fori(K, N)  for (int i = K; i < N; i++)
#define forr(N, K)  for (int i = N; i >= K; i--)
#define nl          "\n"
#define mod         1000000007

void h_swap(int *a, int *b)
{
    int temp;
    temp = *a, *a = *b, *b = temp;
}