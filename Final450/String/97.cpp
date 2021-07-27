#include "../temp.h"

bool areIsomorphic(string str1, string str2)
{

    // Your code here
    map<char, char> m;
    map<char, char>::iterator it;
    for (int i = 0; i < str1.size(); i++)
    {
        it = m.find(str1[i]);
         if (it == m.end())
            m.insert({str1[i], str2[i]});
        else
        {
            if (it->second != str2[i])
                return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "aab", str2 = "xyz";
    cout << areIsomorphic(str1, str2);
}