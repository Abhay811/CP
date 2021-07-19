#include "temp.h"

int minJumps(int arr[], int n)
{
    // Your code here
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int reach = arr[0];
    int step = arr[0];
    int jump = 1;

    for (int i = 1; i < n; i++)
    {
        if (n - 1 == i)
            return jump;
        reach = max(reach, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= reach)
                return -1;
            step = reach - i;
        }
    }
    return -1;
}