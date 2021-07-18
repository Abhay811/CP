#include "temp.h"

int countBitsFlip(int a, int b)
{

    // Your logic here
    int c, d = 0;
    c = a ^ b;
    while (c)
    {
        if (c & 1)
            d++;
        c >>= 1;
    }
    return d;
}