#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
        return -1; // Base case: not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target > arr[mid])
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 13;

    int result = binarySearchRecursive(arr, 0, arr.size() - 1, target);

    cout << result << endl; // Will print -1 if not found
    return 0;
}
