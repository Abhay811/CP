#include "../temp.h"

bool ispar(string x)
{
    stack<char> s;
    for (int i = 0; i < x.size(); i++)
        if (s.size() != 0)
        {
            if ((s.top() == '(' && x[i] == ')') || 
                (s.top() == '{' && x[i] == '}') ||
                (s.top() == '[' && x[i] == ']'))
                s.pop();
            else
                s.push(x[i]);
        }    
        else
        {
            s.push(x[i]);
            // cout << x[i];
        }

    // cout << s.size();
    if (s.size() == 0)
        return true;
    else
        return false;
}

int main()
{
    string s = "[({[([{}])]})]";
    if (ispar(s))
        cout << "ys";
    else
        cout << "no";
}