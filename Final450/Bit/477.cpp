#include "temp.h"

int findPosition(int N)
{
    // code here
    int c = 0, pos;
    for (int i = 0; i <= 31; i++)
        if (1 << i & N)
            c++, pos = i + 1;

    if (c == 1)
        return pos;
    else
        return -1;
}