#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // maybe an answer
        if (arr[mid] > x)
        {
            ans = mid;
            // look for smaller index on left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look for right
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 6, 7, 8, 8, 11, 11, 11, 12};
    int x = 5;

    int result = upperBound(arr, arr.size(), x);

    if (result == arr.size())
        cout << -1 << endl; // not found
    else
        cout << result << endl; // index of lower bound

    return 0;
}
