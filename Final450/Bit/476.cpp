#include "temp.h"

bool isPowerofTwo(long long x)
{

    // Your code here
    return (x && !(x & x - 1));
}