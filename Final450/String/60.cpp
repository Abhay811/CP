#include "../temp.h"

bool isrotated(string s, string t)
{
    if (s.size() != t.size())
        return false;
    s = s + s;
    return (s.find(t) != string::npos);

}
int main()
{
    string s = "ALPHA";
    string t = "HAALP";

    cout << isrotated(s, t) << endl;

}