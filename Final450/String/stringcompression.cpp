#include "../temp.h"

int compress(string s)
{
    string t = "";
    char temp = s[0];
        int c = 1, j;
        for (j = 1; j < s.size(); j++)
        {
            if (temp != s[j])
            {
                if (c == 1)
                    t = t + temp;
                else
                    t = t + temp + to_string(c);
                temp = s[j];
                c = 0; 
            }
            c++;
        }
        if (c == 1)
            t = t + temp;
        else
            t = t + temp + to_string(c);
        cout << t << endl;
    return t.size();
}

int main()
{
    string chars = "aabbccc";
    cout << compress(chars);
}