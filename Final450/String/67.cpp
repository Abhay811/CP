#include "../temp.h"

int main()
{
    string s = "0100110101";
    int c, c0, c1;
    c = c0 = c1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            c0++;
        else
            c1++;
        if (c0 == c1)
            c++;
    }

    if (c == 0)
        cout << -1;
    cout << c << endl;       
}