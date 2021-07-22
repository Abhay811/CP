#include "../temp.h"


int main()
{
    vector<int> price{2, 30, 15, 10, 8, 25, 80};
    int s = 0;

    for (int i = 1; i < price.size(); i++)
    {
        int t = price[i] - price[i - 1];
        if (t > 0)
            s += t;
    }
    cout << s << endl;
}