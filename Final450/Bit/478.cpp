#include "temp.h"

int copybits(int x, int y, int l, int r)
{
    if (l < 1 || r > 32)
        return -1;
    for (int i = l; i <= r; i++)
    {
        if (y & (1 << i - 1))
            x |= (1 << i - 1);
    }
    return x;
}