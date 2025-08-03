#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverLappingIntervals(vector<vector<int>>)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || arr[1][0] > arr.back[][1])
        {
            ans.push_back(arr[1]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], arr[1][1]);
        }
    }
    return ans;
}