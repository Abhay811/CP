#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<string>>& str, int m, int n, vector<string>& out)
{
    out[m] = str[m][n];
    if (m == str.size() - 1)
    {
        for (int i = 0; i < str.size(); i++)
            cout << out[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 0; i < str[0].size(); i++)
        if (str[m + 1][i] != "")
            print(str, m + 1, i, out);

}
int main()
{
    vector<vector<string>> str{{"you", "we", "lam"},
                                {"have", "are", "carp"},
                                {"sleep", "eat", "drink"}};

    vector<string> out(str.size());
    for (int i = 0; i < str[0].size(); i++)
        if (str[0][i] != "")
            print(str, 0, i, out);
}