#include "temp.h"
int maxProfit(vector<int> &prices)
{
    int size = prices.size();
    if (size <= 1)
        return 0;
    int m = prices[0], r;
    int mm = 0;
    for (int i = 1; i < size; i++)
    {
        r = prices[i] - m;
        if (r > mm)
            mm = r;
        if (m > prices[i])
            m = prices[i];
    }
    return mm;
}