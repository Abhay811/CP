#include "temp.h"

int countSetBits(int n)
{
    // Your logic here
    n++;
    int p = 2;
    int c = n / 2;

    while (p <= n)
    {
        int t = n / p;
        c += (t / 2) * p;
        c += (t & 1) ? n % p : 0;
        p <<= 1;
    }
    return c;
}