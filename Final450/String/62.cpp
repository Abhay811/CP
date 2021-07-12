
#include "../temp.h"

int main()
{
    int n; 
    cin >> n;
    string s = "1";

    if (n == 1)
        cout << s << endl;
    for (int i = 1; i <= n; i++)
    {
        string t = "";
        char temp = s[0];
        int c = 1, j;
        for (j = 1; j < s.size(); j++)
        {
            if (temp != s[j])
            {
                t = t + to_string(c) + temp;
                temp = s[j];
                c = 0; 
            }
            c++;
        }
        t = t + to_string(c) + temp;
        s = t;
    }
    cout << s << endl;
}