#include <bits/stdc++.h>
using namespace std;

// 1. Lower Bound: first index where value >= target
int lowerBound(vector<int> &arr, int n, int target) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

// 2. Upper Bound: first index where value > target
int upperBound(vector<int> &arr, int n, int target) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

// 3. Search Insert Position
int searchInsert(vector<int> &arr, int n, int target) {
    return lowerBound(arr, n, target);
}

// 4. Floor: largest value <= target
int findFloor(vector<int> &arr, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            ans = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

// 5. Ceil: smallest value >= target
int findCeil(vector<int> &arr, int n, int target) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            ans = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    cout << "Enter size of sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target: ";
    cin >> target;

    int lb = lowerBound(arr, n, target);
    int ub = upperBound(arr, n, target);
    int sip = searchInsert(arr, n, target);
    int floorVal = findFloor(arr, n, target);
    int ceilVal = findCeil(arr, n, target);

    cout << "\nResults:\n";
    cout << "Lower Bound Index: " << lb << "\n";
    cout << "Upper Bound Index: " << ub << "\n";
    cout << "Search Insert Position Index: " << sip << "\n";
    cout << "Floor Value: " << floorVal << "\n";
    cout << "Ceil Value: " << ceilVal << "\n";

    return 0;
}



// Enter size of sorted array: 5
// Enter sorted elements: 2 3 5 6 8
// Enter target: 4

// Results:
// Lower Bound Index: 2
// Upper Bound Index: 2
// Search Insert Position Index: 2
// Floor Value: 3
// Ceil Value: 5
