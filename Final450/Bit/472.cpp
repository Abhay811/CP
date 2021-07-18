#include "temp.h"

int setBits(int N)
{
    // Write Your Code here
    int c = 0;
    for (int i = 0; i <= 31; i++)
        if (1 << i & N)
            c++;
    return c;
}