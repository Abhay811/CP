#include "../temp.h"
vector<int> factorial(int N)
{
    vector<int> res;
    res.push_back(1);
    for (int i = 2; i <= N; i++)
    {
        int c = 0;
        int t = 0;
        for (int j = 0; j < res.size(); j++)
        {
            t = res[j] * i + c;
            res[j] = t % 10;
            c = t / 10;

        }
        while (c)
            res.push_back(c % 10), c /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() 
{
    vector<int> res = factorial(100);
    for (auto it: res)
        cout << it << " ";
}