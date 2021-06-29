//function
#include "temp.h"
using namespace std;

bool subArrayExists(int arr[], int n)
    {
        set<int> t;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += arr[i];
            
            if (s == 0 || t.find(s) != t.end())
                return true;
            t.insert(s);
        }
        return false;
    }