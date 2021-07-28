#include "../temp.h"

int min(int x, int y, int z) {return min(x, min(y, z));}

int editDistance(string s, string t)
{
    // Code here
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else 
                dp[i][j] = 1 + min(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]);
    // cout << dp[n][m];
    // cout << endl;
    

    //  for (int i = 0; i <= n; i++)
    // {
    //     cout << endl;
    //     for (int j = 0; j <= m; j++)
    //         cout << dp[i][j] << " ";
    // }
    return dp[n][m];
}

int main()
{
    string s = "gfg", t = "gfg";
    cout << editDistance(s, t);
}