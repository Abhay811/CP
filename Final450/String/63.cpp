#include "../temp.h"

string longestPalin(string S)
{
    // code here
    string s = S;
    reverse(S.begin(), S.end());
    string t = S;
    int n, m;
    n = m = S.size();
    // cout << s << " " << t << endl;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= n; j++)
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
       
    
    int ind = dp[m][n];
   
    string str(ind + 1, '\0');
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (s[i - 1] == t[j - 1])
        {
            str[ind - 1] += s[i - 1];
            i--, j--;
            ind--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
   
    return str;
}

int main()
{
    string s = "rfkqyuqfjkxy";
    cout << s << endl;
    cout << longestPalin(s);
}