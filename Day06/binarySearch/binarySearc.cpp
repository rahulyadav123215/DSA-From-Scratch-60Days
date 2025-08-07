#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 13;

    int n = arr.size();
    int result = binarySearch(arr, n, target);

    cout << result << endl;
    return 0;
}
