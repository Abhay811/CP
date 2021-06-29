// function
#include "temp.h"

static bool sortcol(const vector<int>&v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m = intervals.size();
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end(), sortcol);
        int a = intervals[0][0], b = intervals[0][1];
        for (int i = 1; i < m; i++)
        {
            if (intervals[i][0] <= b)
                b = intervals[i][1] > b ? intervals[i][1] : b;
            else
            {
                vector<int> vec;
                vec.push_back(a);
                vec.push_back(b);
                res.push_back(vec);
                a = intervals[i][0];
                b = intervals[i][1];
            }
        }
        vector<int> vec;
        vec.push_back(a);
        vec.push_back(b);
        res.push_back(vec);
        return res;
    }